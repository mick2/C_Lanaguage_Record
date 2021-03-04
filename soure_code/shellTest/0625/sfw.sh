#!/bin/bash
# This shell script is designed for rtk-based SFW projects.
# print an UI to choose which profile to be used.

TOPDIR=${PWD}
IMGTAG=${TOPDIR}/host/tools/imgtag
CHKSUM=${TOPDIR}/host/tools/genTotalChecksum
IMGHDR=${TOPDIR}/host/tools/imghdr
MKJFFS=${TOPDIR}/host/tools/mkfs.jffs2

model_array=(TEG-082WS TEG-204WS TEG-284WS TEG-524WS TPE-082WS TPE-1020WS \
	TPE-1620WS TPE-2840WS TPE-5028WS TPE-5048WS TPE-5240WS)
choice=

function check_params()
{
	if [ -z "$1" ]; then
		echo -e "\033[41mwrong single firmware name. check your model profile!!!\033[0m"
		exit -1
	else
		SFW_NAME="$1"
		echo -e "\033[42msfw name: ${SFW_NAME}\033[0m"
	fi

	if [ -z "$2" ]; then
		echo -e "\033[41mwrong software version. check your model profile!!!\033[0m"
		exit -1
	else
		SW_VERSION="$2"
		echo -e "\033[42msw version: ${SW_VERSION}\033[0m"
	fi

}

function make_choice()
{
	echo -e "Please choose a Model from the list!"
	echo -e "------------------------------------"
	for i in $(seq ${#model_array[*]})
	do
		echo -e " $i: ${model_array[i-1]}"
	done
	echo -e "------------------------------------"

	echo -n "please input the number of the model: "
	read choice

	if [ -z "$choice" ]; then
		choice=${#model_array[*]}
		echo -e "\033[45mchoose to compile all models!!\033[0m"
	elif [ "$choice" -ge "1" -a "$choice" -le "${#model_array[*]}" ]; then
		let "choice --"
		echo -e "your profile is: \033[42m${model_array[$choice]}\033[0m"
	else
		echo -e "\033[41mmust give the correct profile file name!!!\033[0m"
		exit -1
	fi
}

function make_uboot()
{
	CONF_PATH=${TOPDIR}/os/os_rtk_uClinux_switch/uClinux/vendors/Realtek/SDK
	BOOT_PATH=${TOPDIR}/boot/uboot_rtk_switch/u-boot-2011.12
	MODEL_NAME=${model_array[$1]}

	echo -e "\033[46m--> make uboot for ${MODEL_NAME}\033[0m"

	if [ -d "${CONF_PATH}" ]; then
		make -C ${BOOT_PATH} distclean > /dev/null
		cp -fav ${CONF_PATH}/Cypress/config.u-boot.$1 ${BOOT_PATH}/.config || exit -1
		make -C ${BOOT_PATH} config || exit -1
		make -C ${BOOT_PATH} || exit -1
		cp ${BOOT_PATH}/u-boot.bin image/boot-${MODEL_NAME}.bin
		#cp -fav .config ${CONF_PATH}/${MODEL_NAME}/config.u-boot
		cp image/boot-${MODEL_NAME}.bin image/boot.tag
		${IMGTAG} image/boot.tag 1
		${CHKSUM} image/boot.tag image/boot.sum
		cat image/boot.tag image/boot.sum > image/boot.vc
		#${IMGHDR} image/boot.vc image/${MODEL_NAME}-${SW_VERSION}-BOOT.hex ${MODEL_NAME} boot 0 2 4
		${IMGHDR} image/boot.vc image/${MODEL_NAME}-${SW_VERSION}-BOOT.hex ${SFW_NAME} boot 0 2 4
		rm image/boot.tag
		rm image/boot.sum

	else
		echo -e "\033[42m${CONF_PATH}\033[41m doesn't exist!!!\033[0m"
		exit -1
	fi
}

function make_linux()
{
	echo -e "\033[46m--> make linux for ${SFW_NAME}\033[0m"
	#cp -fav ${CONF_PATH}/config.sdk sdk/sdk_rtk_switch/rtk-sdk/config/.config
	#cp -fav ${CONF_PATH}/config.linux-2.6.x os/os_rtk_uClinux_switch/uClinux/linux-2.6.x/.config
	make -C ${TOPDIR} os || exit -1
	cp image/uImage image/uImage.tag
	${IMGTAG} image/uImage.tag 1 ${SW_VERSION}
	${CHKSUM} image/uImage.tag image/uImage.sum
	cat image/uImage.tag image/uImage.sum > image/uImage.vc
	${IMGHDR} image/uImage.vc image/${SFW_NAME}-${SW_VERSION}-OS.hex ${SFW_NAME} os 3 2 4 image/vmlinux.dump
	rm image/uImage.tag
	rm image/uImage.sum
}

function make_icore()
{
	echo -e "\033[46m--> make icore for ${SFW_NAME}\033[0m"

	make -C ${TOPDIR} core squashfs || exit -1
	cp image/squashfs image/squashfs.tag
	${IMGTAG} image/squashfs.tag 1 ${SW_VERSION}
	${CHKSUM} image/squashfs.tag image/squashfs.sum
	cat image/squashfs.tag image/squashfs.sum > image/squashfs.vc
	${IMGHDR} image/squashfs.vc image/${SFW_NAME}-${SW_VERSION}-FS.hex ${SFW_NAME} squashfs 4 2 4 image/vmlinux.dump
	rm image/squashfs.tag
	rm image/squashfs.sum
}

function make_jffs2()
{
	echo -e "\033[46m--> make jffs2 for ${SFW_NAME}\033[0m"

	if [ -e "image/jffs2" ]; then
		return
	fi

	JFFS_PATH=${TOPDIR}/target/jffs
	mkdir -p ${JFFS_PATH}/{flash,nfs} || exit -1
	${MKJFFS} --pad=0x200000 --eraseblock=0x10000 --big-endian -n -d ${JFFS_PATH} -o image/jffs2 || exit -1

	cp image/jffs2 image/jffs2.tag
	${IMGTAG} image/jffs2.tag 1
	${CHKSUM} image/jffs2.tag image/jffs2.sum
	cat image/jffs2.tag image/jffs2.sum > image/jffs2.temp
	${IMGHDR} image/jffs2.temp image/${SFW_NAME}-${SW_VERSION}-JFFS2.hex ${SFW_NAME} jffs 7 2 4 image/jffs2.temp
	rm image/jffs2.tag
	rm image/jffs2.sum
	rm image/jffs2.temp
}

function bind_fw_hex()
{
	cat image/${SFW_NAME}-${SW_VERSION}-OS.hex image/${SFW_NAME}-${SW_VERSION}-FS.hex > image/${SFW_NAME}-${SW_VERSION}-FW.hex
}

function bind_all_hex()
{
	MODEL_NAME=${model_array[$1]}
	cat image/${MODEL_NAME}-${SW_VERSION}-BOOT.hex image/${SFW_NAME}-${SW_VERSION}-FW.hex > image/${MODEL_NAME}-${SW_VERSION}-ALL.hex
}

# 8 MTD partitions
# dev  start addr  end addr    size    name
# mtd0 0x00000000-0x00080000 00080000 "BOOT"
# mtd1 0x00080000-0x000c0000 00040000 "BDINFO"
# mtd2 0x000c0000-0x00100000 00040000 "BDINFO2"
# mtd3 0x00100000-0x00280000 00180000 "KERNEL1"
# mtd4 0x00280000-0x00f80000 00d00000 "ROOTFS1"
# mtd5 0x00f80000-0x01100000 00180000 "KERNEL2"
# mtd6 0x01100000-0x01e00000 00d00000 "ROOTFS2"
# mtd7 0x01e00000-0x02000000 00200000 "JFFS2
function make_precode()
{
	MODEL_NAME=${model_array[$1]}

	echo -e "\033[44m$(($1+1)): ${model_array[$1]}\033[0m"

	dd if=/dev/zero         of=image/${MODEL_NAME}-${SW_VERSION}-PRECODE.bin bs=1024 count=32768
	dd if=image/boot.vc     of=image/${MODEL_NAME}-${SW_VERSION}-PRECODE.bin bs=1024 seek=0
	dd if=image/uImage.vc   of=image/${MODEL_NAME}-${SW_VERSION}-PRECODE.bin bs=1024 seek=1024
	dd if=image/squashfs.vc of=image/${MODEL_NAME}-${SW_VERSION}-PRECODE.bin bs=1024 seek=2560
	dd if=image/uImage.vc   of=image/${MODEL_NAME}-${SW_VERSION}-PRECODE.bin bs=1024 seek=15872
	dd if=image/squashfs.vc of=image/${MODEL_NAME}-${SW_VERSION}-PRECODE.bin bs=1024 seek=17408
	dd if=image/jffs2       of=image/${MODEL_NAME}-${SW_VERSION}-PRECODE.bin bs=1024 seek=30720

	echo -e "\033[46mMake ${MODEL_NAME}-${SW_VERSION}-PRECODE.bin successfully!\033[0m"
}

function make_sfw()
{
	make_linux
	make_icore
	make_jffs2
	bind_fw_hex

	if [ "$choice" -eq "${#model_array[*]}" ]; then
		i=1
		while [[ "$i" -le "$choice" ]]; do
			make_uboot "$((i-1))"
			bind_all_hex "$((i-1))"
			make_precode "$((i-1))"
			((i++));
		done
	else
		make_uboot "$choice"
		bind_all_hex "$choice"
		make_precode "$choice"
	fi
}

##############################
# main entry
##############################
# 1. check parameters
check_params "$@"

# 2. choose a model
make_choice

# 3. make single firmware(s)
make_sfw

exit 0

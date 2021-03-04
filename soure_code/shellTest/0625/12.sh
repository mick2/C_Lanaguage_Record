#!/bin/bash
echo "------------------------------------------------------------------------------"
echo " Start to clean boot                                                           "
echo "------------------------------------------------------------------------------"                                                                                                    
ifeq ($(MVL_CHIP_AC3),YES)
  cd ${BOOT_ABSOLUTE_DIR};\
  ${BOOT_ABSOLUTE_DIR}/${UBOOT_CLEAN_COMMAND}
else
# CAMEOTAG: add by guiyang on 2020/12/28 for armada 38x board clean boot
ifeq ($(MVL_CHIP_ARMADA_38X),YES)
  cd ${BOOT_ABSOLUTE_DIR};\
  ${BOOT_ABSOLUTE_DIR}/${UBOOT_CLEAN_COMMAND}
else
# CAMEOTAG: add by guiyang on 2020/12/28 for armada 38x board clean boot
ifeq ($(MVL_CHIP_BOBK),YES)
  cd ${BOOT_ABSOLUTE_DIR};\
  ${BOOT_ABSOLUTE_DIR}/${UBOOT_CLEAN_COMMAND}
else
  make -w -C ${BOOT_ABSOLUTE_DIR} distclean
endif
endif
endif

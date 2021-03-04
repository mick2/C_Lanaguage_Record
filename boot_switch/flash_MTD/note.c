1. 常用的flash分区
* boot: 存放u-boot image, 用于引导os.
* env: 存放u-boot下的环境变量, 除u-boot common的变量, 如ipaddr, serverip等,
  也包括我们自己扩展的变量, 如imageId, hw_version等.
* kernel: 存放linux os的image.
* rootfs: 存放根文件系统的image, 其中包含交换机系统的核心可执行文件ISS.exe 或 appDemo.
* jffs2: 存放jffs2文件系统, 可读写, 挂载在/mnt/flash下, 用于保存交换机的config等相关信息.

# C_Lanaguage_Record
记录C语言学习的相关整理
================================================================================

[20201102]
1. 添加singleFW makefile文件夹
2. 整理上传关于SingleFW的相关代码

[20201102]
1. 完成初版可以正常运行成功的Source Code (V1.0)

[20201103]
1. 添加printf Debug信息:

#define UNDERLINE              "\033[4m"
#define BLACK                  "\033[30m"
#define RED                    "\033[31m"
#define GREEN                  "\033[32m"
#define YELLOW                 "\033[33m"
#define BLUE                   "\033[34m"
#define PURPLE                 "\033[35m"
#define DARKGREEN              "\033[36m"
#define WHITE                  "\033[37m"
#define CLOSE                  "\033[0m"
#define _BLACK                 "\033[40m"
#define _RED                   "\033[41m"
#define _GREEN                 "\033[42m"
#define _YELLOW                "\033[43m"
#define _BLUE                  "\033[44m"
#define _PURPLE                "\033[45m"
#define _DARKGREEN             "\033[46m"
#define _WHITE                 "\033[47m"
============
Example:
printf("==>\n" GREEN);
printf("study C!\n" GREEN);

[20201120]
1. 添加network protocol模块, 记录学习的protocol.
2. 添加dhcp-bootp, snmp submodule protocol.

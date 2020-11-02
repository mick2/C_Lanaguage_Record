#ifndef __SINGLEDEBUG_H__
#define __SINGLEDEBUG_H__

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

#if 1
#define fshow(fmt, args...)    \
	printf("==> UDEBUG [%s +%d][%s] " fmt CLOSE, __FILE__, __LINE__, __FUNCTION__, ##args)
#else
#define fshow(fmt, args...)
#endif

#endif


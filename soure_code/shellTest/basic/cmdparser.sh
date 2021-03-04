#!/bin/sh
help()
{
	echo "This is a generic command line parser demo."
	echo "USAGE EXAMPLE:cmdparset -l hello -f -- -somefile1 somefile2"
	echo "HELP"
	exit 0
}

while [ -n "$1" ];
do
	case $1 in
		-h) help:shift 1;;
		-f) opt_f=1;shift 1;;
		-l) opt_l=$2;shift 2;;
		--) shift;break;;
		-*) echo "error: no such option $1. -h for help";exit 1;;
		*) break;;
	esac
done
echo "opt_f is $opt_f"
echo "opt_l is $opt_l"
echo "first arg is $1"
echo "2nd arg is $2"

#这个脚本的工作原理：
#脚本首先在所有输入命令行参数中进行循环，将输入参数与case表达式进行比较，如果匹配则设置一个变量并且移除该参数。
#根据unix的惯例，首先输入的应该是包含减号的参数。





































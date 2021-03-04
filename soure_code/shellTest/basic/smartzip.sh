#!/bin/sh
ftype=`file "$1"`
case "$ftype" in
"$1: Zip archive"*)
	unzip "$1" ;;
"$1: gzip compressed"*)
	gunzip "$1" ;;
"$1: bzip2 compressed"*)
	bunzip2 "$1" ;;
*)
	echo "File $1 can not be uncompressed with smartzip"
esac

#file命令可以辨别出一个给定文件的文件类型
#Note ' and ` is different
#特殊变量$1,该变量包含有传递给该脚本的第一个参数值
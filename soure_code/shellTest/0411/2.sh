#!/bin/bash

##################While 循环例子1#############
echo "while 循环例子1";
i=10;
while [[ $i -gt 5 ]]; do
	echo $i;
	((i--));
done;

#################while 循环例子2##############
echo "while 循环例子2";

#循环读取/etc/hosts文件内容
while read line; do
	echo $line;
done < /etc/hosts;


################for 循环例子1###############
echo "for 循环例子1"
for ((i=1; i<=10; i++)); do
	echo $i;
done;


###############for 循环例子2##############
echo "for 循环例子2"
# seq 10 产生1 2 3 ........ 10 空格分隔字符串
for i in $(seq 10); do
	echo $i;
done;


####################for 循环例子3 ################
echo "for 循环例子3"

#根据终端输入的文件名来检查当前目录该文件是否存在
for file in $*; do
	if [ -f "$file" ]; then
		echo "INFO:$line exists"
	else
		echo "ERROR:$file not exists"
	fi
done;


############## until 循环例子1 #################
echo "until 循环例子1";
a=10;
until [[ $a -lt 0 ]]; do
	echo $a;
	((a--));
done;

















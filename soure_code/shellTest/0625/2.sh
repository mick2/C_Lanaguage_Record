#!/bin/bash

function print_log()
{
	echo "##############"
	echo "#             "
	echo "##############"
}

echo "Shell 传递函数实例:"
echo "传递到Shell 脚本的参数个数: $#"
echo "执行的文件名: $0"
echo "第一个参数: $1 "
echo "第二个参数: $2"
echo "第三个参数: $3"


echo "## -----1"
val=`expr 2 + 2`
echo "两数之和为: $val"

##print_log()

a="abc"
b="efg"

if [ -z $a ]
then
	echo "-z $a : 字符串长度为0"
else
	echo -e "-z $a : \033[42m字符串长度不为0\033[0m"
fi

echo -e "\033[42m ${a} \033[0m"
echo -e "\033[46m ${b} \033[0m"


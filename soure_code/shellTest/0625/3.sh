#!/bin/bash

# 41m red
# 42m green 
# 43m yellow
#

file="/var/www/runoob/test.sh"
if [ -r $file ]
then
	echo -e "\033[41m 文件可读 \033[0m"
else
	echo -e "\033[41m 文件不可读 \033[0m"
fi

if [ -w $file ]
then
	echo -e "\033[42m 文件可写 \033[0m"
else
	echo -e "\033[42m 文件不可写 \033[0m"
fi

if [ -x $file ]
then
	echo -e "\033[43m 文件可执行 \033[0m"
else
	echo -e "\033[43m 文件不可执行 \033[0m"
fi


#echo "##################"
#read name
#echo "$name It is a test"

echo -e " is good \n"
echo `date` 


echo "#####################"
read -p "请输入一段文字:" -n 6 -t 5 -s password
echo -e "\n \033[45m password is $password \033[0m"
















#!/bin/bash
##########函数定义################
echo "函数定义";

#注意: 所有函数在使用前必须定义.这意味着必须将函数放在脚本开始部分,直至shell解释器首次发现它时,才可以使用.调用函数仅使用其函数名即可.
function hello() {
	echo "Hello!";
}



function hello_param() {
	echo "Hello $1 Hello $1 !!"
}

########函数调用 ############
#函数调用
echo "函数调用";
hello;


########参数传递############
echo "函数传参调用";
hello_param ben;


##########函数文件#########
echo "函数文件调用";
#调用函数文件,点和demo_call之间有个空格
. demo_call.sh
#调用函数
callFunction ben;


#########载入和删除#######
echo "载入和删除";


#######参数读取#########
echo "参数读取"


#参数读取的方式和终端读取参数的方式一样
funWithParam() {
	echo "The value of the first parameter is $1 !"
	echo "The value of the second parameter is $2 !"

}











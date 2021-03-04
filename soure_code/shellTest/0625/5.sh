#!/bin/bash

num1=100
num2=200
if test $[num1] -eq $[num2]
then
	echo -e "\033[42m num1 == num2 \033[0m"
else
	echo -e "\033[42m num1 != num2 \033[0m"
fi

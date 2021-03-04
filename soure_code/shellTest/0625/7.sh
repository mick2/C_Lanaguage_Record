#!/bin/bash
echo "输入 1 到 4 之间的数字:"
echo "你输入的数字为:"
read aNum
case $aNum in
	1) echo -e "\033[42m select 1\033[0m"
		;;
	2) echo -e "\033[43m select 2\033[0m"
		;;
	3) echo -e "\033[44m select 3\033[0m"
		;;
	4) echo -e "\033[45m select 4\033[0m"
		;;
	*) echo -e "\033[46m 你没有输入1 到 4 之间的数字\033[0m"
		;;
esac

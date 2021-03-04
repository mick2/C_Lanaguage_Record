#!/bin/bash
while :
do
	echo -n "input 1 ~ 5 num:"
	read aNum
	case $aNum in
		1|2|3|4|5) echo "input num is: $aNum"
		;;
		*) echo "Invalid number"
			break
		;;
	esac
done


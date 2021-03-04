#!/bin/bash

USER=`whoami`
HOST=`hostname -s`
DATE=`date '+%d%m%Y'`

help(){
cat <<EOF
--------------------------------------------------
User: $USER	Host: $HOST	Date: $DATE
--------------------------------------------------
1. List files in current directory
2. Use the vi editor
3. See who is on the system
H. Help screen
Q. Exit Menu
--------------------------------------------------
Your Choice [1, 2, 3, H, Q] >
EOF
}

while :
do
	help
	echo -n "Enter your choice: "
	read ANS
	case $ANS in
		1) ls -lart ;;
		2) vi 1.txt ;;
		3) who ;;
		H|h) help ;;
		Q|q) exit 0 ;;
	esac
done


#!/bin/bash
for i in $(seq 10); do
	echo $i;
done


echo -e "\033[42m##########\033[0m"

for file in $*; do
	if [ -f "$file" ]; then
		echo "INFO:$file exist"
	else
		echo "ERROR:$file not exist"
	fi
done;

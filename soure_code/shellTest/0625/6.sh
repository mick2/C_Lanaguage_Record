#!/bin/bash

a=5
b=6
result=$[a+b]
echo "result: $result"

echo "#####################"


for loop in 1 2 3 4 5
do
	echo -e "The value is: \033[42m$loop\033[0m"
done


echo "######################"
int=1
while(( $int<=5 ))
do
	echo $int
	let "int++"
done

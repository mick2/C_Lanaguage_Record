#!/bin/bash
name=(name1 name2 name3)
echo ${name[0]}
echo ${name[1]}
echo ${name[2]}
echo ${name[@]}


echo "-----------------------------------------\n"
length=${#name[@]}
echo ${length}

# or
length=${#name[*]}
echo ${length}

#取得数组单个元素的长度
length=${#name[n]}
echo $length

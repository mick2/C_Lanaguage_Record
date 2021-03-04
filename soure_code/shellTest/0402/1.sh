#!/bin/bash
echo $SHELL
a=(1 2 3 4 5)
echo "Get"
echo ${#a[@]}
echo ${#a[*]}


unset a[1]

echo "Data:"
echo ${a[@]}
echo ${a[*]}




echo "截取"
a=(1 2 3 4 5 6 7 8)
echo ${a[@]:0:3}
echo ${a[*]}

echo "根据分隔符拆分字符串为数组"
a="one,two,three,four"
OLD_IFS="$IFS"
IFS=","
arr=($a)
IFS="OLD_IFS"
for s in ${arr[@]}
do
	echo "$s"
done



exit

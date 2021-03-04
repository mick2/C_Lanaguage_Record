#!/bin/bash
## -----1

str="adbc"
echo ${#str}

## ------2

str="runoob is a great site!"
echo ${str:2:4}

sleep 10

echo "## -----3"
array_name=(value0, value1, value2, value3, value4, \
	value5, value6)
echo ${array_name[0]}
echo ${array_name[1]}
echo ${array_name[2]}
echo ${array_name[3]}
echo ${array_name[4]}

echo "all value:"
echo  ${array_name[@]}

echo -e "获取数组元素的个数:"
echo "${#array_name[@]}"


:<<EOF

one
two

EOF





#!/bin/bash
my_name="jack"
my_age="20 years old"
echo ${my_name} ${my_age}
echo ${my_name}${my_age}
echo ${#my_name}
echo "------------截取字符串---------------\n"
echo ${my_name:0:2}

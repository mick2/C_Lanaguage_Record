#!/bin/bash
a=1
b=2
if [ $a == $b ]
then
        echo "a==b"
elif [ $a -gt $b ]
then
        echo "a > b"
elif [ $a -lt $b ]
then
        echo "a < b"
else
        echo "没有符合的条件"
fi




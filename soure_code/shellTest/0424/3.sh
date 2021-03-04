#!/bin/bash
echo "hi,vim"
read PERSON
echo "$PERSON, how are you!"
a=10
b=20
value=`expr 2 + 2`
echo "Total value :${value}"
value=`expr $a * $b`
echo "a * b : ${value}"
value=`expr $b % $a`
echo "a % b : ${value}"
if [ $a != $b ]
then
        echo "a not equal b"
fi

echo "---------------------------------\n"
if [ $a -eq $b ]
then
        echo "$a -eq $b"
else
        echo "a not equals b"
fi


if [ $a -gt $b ]
then
        echo "$a gt $b"
else
        echo "a not greater than b"
fi

if [ $a -le $b ]
then
        echo "$a le $b"
else
        echo "a not less or equal to b"
fi


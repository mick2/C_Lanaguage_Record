#!/bin/sh
echo -n "Enter a list of names:"
read list
if echo $list | grep "Peter" > /dev/null 2>&1
then
	echo "Peter is here"
else
	echo "Peter's not in the list. No comment!"
fi


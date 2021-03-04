#!/bin/bash

echo -e "\033[42mWhat is your favorite OS?\033[0m"

select OS in "Windows" "Linux/Unix" "Mac OS" "Other"
do
	break
done

echo "You have selected $OS"

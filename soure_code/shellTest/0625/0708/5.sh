#!/bin/bash



read -p "Enter a number or sting here:" input
case $input in
	[0-9]) echo -e "Good job, Your input is a numberic! \n";;
	[a-zA-Z]) echo -e "Good job, Your input is a character! \n";;
	*) echo -e "Your input is wrong, input again! \n";;
esac

#!/bin/bash
#set -x
echo -n "are you a student ?"
read anwser

if [ $anwser=Y ]
then
        echo "Yes, I am a student "
else
        echo "No I am a student "
fi

exit 0

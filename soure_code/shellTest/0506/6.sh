#!/bin/bash
M=$(/usr/bin/uname -r | awk -F. '{print $1}')
echo "内核版本: ${M}"
S=$(/usr/bin/uname -r | awk -F. '{print $2}')
echo "内核版本: ${S}"
if [ $M -gt 2 ]
then
        echo "主版本满足条件,可以安装"
elif [ $M -eq 2 -a $s -ge 4 ]
then
        echo "可以安装"
else
        echo "版本太低,无法安装"
fi

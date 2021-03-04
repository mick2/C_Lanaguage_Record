#!/bin/bash
echo $*;
echo $#;

if [ $# -lt 3 ]; then
	echo $#;
else
	echo $0;
	echo "参数过多不在控制台显示";
fi

#!/bin/bash
echo "$1"

case $1 in
	start | begin)
		echo "start something"
	;;
	stop | end)
		echo "stop something"
	;;
	*)
		echo "Ignorant"
	;;
esac



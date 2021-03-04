#!/bin/bash
if test -e /proc/version
then
	echo "/proc/version is exist"
else
	echo "/proc/version isn't exist"
fi

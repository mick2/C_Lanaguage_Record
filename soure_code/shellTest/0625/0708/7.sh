#!/bin/bash

if [ $# -lt 3 ]; then
	cat <<-EOF
	ren -- renames a number of files using sed regular expressions
	USAGE: ren.sh 'regexp' 'replacement' files
	EXAMPLE: rename all *.HTM files in *.html:
	ren 'HTM$' 'html' *.HTM
	EOF
	exit 0
fi

OLD="$1"
NEW="$2"
shift
shift


echo "$*"
# $* contains now all the files
for file in $*
do
	if [ -f "$file" ]; then
		newfile=`echo "$file" | sed "s/${OLD}/${NEW}/g"`
		echo "${newfile}"
		if [ -f "$newfile" ]; then
			echo "ERROR: $newfile exists already"
		else
			echo "renaming $file to $newfile"
			mv "$file" "$newfile"
		fi
	fi
done

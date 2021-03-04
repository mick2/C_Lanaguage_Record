#!/bin/bash

model_array=( TPE-30284 TEG-30284)

for i in $(seq ${#model_array[*]})
do
	echo -e  "$i: ${model_array[i-1]}"
done


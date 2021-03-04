#!/bin/bash
for ((i=0; i<3; i++)); do
        touch test_${i}.txt
        echo "shell is easy" >> test_${i}.txt
done

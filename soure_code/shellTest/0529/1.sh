#!/bin/bash
start=0;
total=0;
for i in $(seq $start 2 1000); do
        total=$(($total+$i));
done;
echo $total;

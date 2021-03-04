#!/bin/bash
start=1
total=0;
while [ $start -le 1000 ]; do
        [[ $(($start%2)) == 0 ]] && total=$(($total+$start));
        start=$(($start+1));
done;
echo $total;

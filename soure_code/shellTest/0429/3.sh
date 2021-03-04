#!/bin/bash
time_limit=6
time_interval=1
while [ "$SECONDS" -le "$time_limit" ]
do
if [ $SECONDS -lt 7 ]
then
        second=1
        let seconds+=1
fi
echo "This script already runing $seconds second(s)."
sleep $time_interval
done
exit 0

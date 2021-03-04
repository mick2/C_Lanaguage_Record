#!/bin/bash
if [ -t ]; then
        echo "We are interactive with a terminal"
else
        echo "We must be running from some background process probably cron or at"
fi

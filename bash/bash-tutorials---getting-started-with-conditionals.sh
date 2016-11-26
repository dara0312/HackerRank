#!/bin/bash
read i
if [ $i == "Y" ] || [ $i == "y" ]; then
    echo "YES"
else
    echo "NO"
fi

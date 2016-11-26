#!/bin/bash
for X in {1..99}
do
    if [ $(( $X % 2 )) -ne 0 ]
    then
        echo $X
    fi
done

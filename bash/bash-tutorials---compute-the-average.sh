#!/bin/bash
sum=0
read N
for i in $(seq 1 $N); do
    read x
    sum=$(( $sum + $x ))
done
printf "%.3f\n" `echo "$sum / $N" | bc -l`

#!/bin/python3

import sys


n = int(input().strip())
A = [int(A_temp) for A_temp in input().strip().split(' ')]
d={}
mind = n
for i in range(n):
    try:
        mind = min(i-d[A[i]],mind)
        d[A[i]]=i
        if mind == 1:
            break
    except:
        d[A[i]]=i
if mind == n:
    print(-1)
else:
    print(mind)

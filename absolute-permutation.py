#!/bin/python

import sys

t = int(raw_input().strip())
for a0 in xrange(t):
    n,k = raw_input().strip().split(' ')
    n,k = [int(n),int(k)]
    number = []
    for i in xrange(1,n+1):
        number.append(i)
    if k == 0:
        print " ".join(str(e) for e in number)
    else:
        if n % (2*k) == 0:
            for j in xrange(0,n/(2*k)):
                for i in xrange(1,k+1):
                    tmp=number[j*2*k+i-1]
                    number[j*2*k+i-1] = number[j*2*k+i+k-1]
                    number[j*2*k+i+k-1] = tmp
            print " ".join(str(e) for e in number)
        else:
            print -1

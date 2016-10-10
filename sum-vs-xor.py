#!/bin/python

import sys


n = long(raw_input().strip())
print int(n==0) or pow(2,len([0 for i in bin(n)[2:] if i=='0']))

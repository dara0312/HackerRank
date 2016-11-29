# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys
m=raw_input()
for c in m:
    sys.stdout.write(str((int(c)+1)%10))

# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(raw_input())
l = map(int, raw_input().split())
l = sorted(l)
found = False
for i in xrange(n-1,-1,-1):
    for j in xrange(i-1,-1,-1):
        for k in xrange(j-1,-1,-1):
            if l[j]+l[k] > l[i]:
                print ' '.join(str(e) for e in [l[k],l[j],l[i]])
                found = True
                break
        if found:
            break
    if found:
        break
if not found:
    print -1

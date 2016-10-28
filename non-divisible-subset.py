# Enter your code here. Read input from STDIN. Print output to STDOUT
[n, k] = map(int, raw_input().split(' '))
s = map(int, raw_input().split(' '))
c = [0 for i in xrange(k)]
res = 0
for i in s:
    c[i % k] += 1
if k % 2 == 0:
    c[k/2] = min(1, c[k/2])
for i in xrange(1, k/2+1):
    res += max(c[i], c[k-i])
res += min(1, c[0])
print res

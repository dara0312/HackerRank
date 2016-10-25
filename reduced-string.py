# Enter your code here. Read input from STDIN. Print output to STDOUT
S = raw_input()
l = []
for i in xrange(len(S)):
    if not l or S[i] != l[-1]:
        l += [S[i]]
    else:
        l.pop()

if l:
    print ''.join(l)
else:
    print 'Empty String'

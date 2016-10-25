# Enter your code here. Read input from STDIN. Print output to STDOUT
fp = int(raw_input())
for ff in xrange(fp):
    a = raw_input()
    b = raw_input()
    l = {}
    res = False
    for i in b:
        if i not in l:
            l[i] = 0
        l[i] += 1
    for i in a:
        if i not in l:
            if i == i.upper():
                print 'NO'
                res = True
                break
        else:
            if l[i] > 0:
                l[i] -= 1
            else:
                print 'NO'
                res = True
                break
    if res:
        continue
    a = a.upper()
    L = ['' for i in xrange(len(a)+1)]
    for i in xrange(1, len(a)+1):
        tmp = ''
        for j in xrange(i):
            if len(L[j] + a[i-1]) > len(tmp):
                tmp = L[j] + a[i-1]
                if tmp == b[:len(tmp)]:
                    L[i] = tmp
                    if len(tmp) == len(b):
                        print "YES"
                        res = True
                        break
        if res:
            break
    if not res:
        print 'NO'

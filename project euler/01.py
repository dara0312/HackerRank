T = int(input())
def N(x):
    return x*(x+1);

for i in range(T):
    n = int(input())
    n -= 1
    a = int(n/3)
    b = int(n/5)
    c = int(n/15)
    print(int( int(3*N(a) + 5*N(b) - 15 * N(c)) >> 1));


////
def s(n): return n*(n+1)/2
def r(n): return s(n/3)*3 + s(n/5)*5 - s(n/15)*15
print '\n'.join(str(r(int(raw_input())-1)) for i in xrange(int(raw_input())))


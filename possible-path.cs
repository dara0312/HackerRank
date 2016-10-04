#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if (gcd(abs(a), abs(b)) == gcd(abs(x), abs(y))) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

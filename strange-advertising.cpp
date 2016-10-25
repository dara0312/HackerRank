#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i, j, cnt = 0, num = 5;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cnt += num / 2;
        num = (num/2)*3;
    }
    cout << cnt << endl;
    return 0;
}

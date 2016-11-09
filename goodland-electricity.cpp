#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k, pos, ok, res = 0, i, j;
    cin >> n;
    cin >> k;
    int c[n+1]; // int c[1000001]; for test case 14 - 16 - 17
    for (i = 1; i <= n; i++) { cin >> c[i]; }
    k--; pos = 1;
    for (i = k+1; i <= n+k; i += k * 2 + 1) {
        ok = 0;
        for (j = i; j >= i - k; j--) { if (c[j] == 1) { i = j; res++; ok = 1;break; } }
        if (ok == 0) {
            for (j = i - k; j >= i - 2 * k; j--) { if (c[j] == 1) { i = j; res++; ok = 1; break; } }
            if (ok == 0) { cout << -1; return 0; }
        }
    }
    if (i - k <= n) {
        ok = 0;
        for (j = i; j >= i - k; j--) { if (c[j] == 1) ok = 1; }
        cout << ok ? res : -1;
    } else cout << res;
    return 0;
}

/*  by muratekici hackkerank

#include <bits/stdc++.h>

using namespace std;

const int N = 3e5 + 5;
int n, k, p, prv[N];

int main() {
    scanf("%d %d", &n, &k);
    int last = -1, ans = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &p);
        if(p == 1) last = i;
        prv[i] = last;
    }
    for(int i = 0; i < n; ) {
        int take = prv[min(i + k - 1, n - 1)];
        if(take == -1 || take + k <= i) { printf("-1\n"); return 0; }
        i = take + k; ans++;
    }
    printf("%d\n", ans);
    return 0;
}

*/

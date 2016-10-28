#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll q;
    cin >> q;
    while(q--) {
        ll n;
        cin >> n; ll mn = 2*n;
        ll matrix[mn][mn];

        for (ll i=0;i < mn;i++) {
            for (ll j=0; j < mn; j++) cin >> matrix[i][j];
        }
        ll maxi = -1; ll sum = 0;
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                ll mp = matrix[i][j];
                mp = max(mp,max(matrix[mn-i-1][j],matrix[i][mn-j-1]));
                mp = max(mp,matrix[mn-i-1][mn-j-1]);
                sum += mp;
            }
        }
        cout << sum << endl;
    }
    return 0;
}

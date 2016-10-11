#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;

ll len(vector<pair<int,int>> &v) {
    sort(v.begin(),v.end());
    auto i= v.begin(); int a = i->first; int b = i->second;
    ll r = 0; i++;
    for(;i!=v.end();i++) {
        if (i->first <= b) b= max(b,i->second);
        else { r+=(b-a+1); a=i->first; b=i->second; }
    }
    r+=(b-a+1);
    return r;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m, k; cin >> n >> m >> k;
    map<int, vector<pair<int, int>>> grid;
    while (k--) {
        int r, c1, c2; cin >> r >> c1 >> c2;
        grid[r].push_back(make_pair(c1,c2));
    }
    ll res = (ll) n * m;
    for (auto &it : grid) { res -= len(it.second); }
    cout << res << endl;
    return 0;
}

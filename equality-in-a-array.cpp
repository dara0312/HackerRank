#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> freq(100, 0);
    for (int i = 0; i < n; ++i) {
        int hold;
        cin >> hold;
        ++freq[hold-1];
    }
    int max_val = 0, sum = 0;
    for (int f : freq) {
        max_val = max(max_val, f);
        sum += f;
    }
    int ans = sum - max_val;
    cout << ans;
    return 0;
}

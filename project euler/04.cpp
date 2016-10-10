#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool pali(int x) {
    int n = x; int p = 1;
    while (n!=0) { n/=10; p*=10; }
    int r = 1; p/=10;
    while (p>r) {
        if((x/p)%10 != (x/r)%10) { return false; }
        p/=10;r*=10;
    }
    return true;
}

int main(){
    int t; cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n; cin >> n;
        int m = 0;
        for (int i = 1; i < 1000; i++) {
            for (int j = 1; j < 1000; j++) {
                if (i*j < n && pali(i*j)) m = max(m, i*j);
            }
        }
        cout << m << endl;
    }
    return 0;
}

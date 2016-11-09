<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$t);
for($a0 = 0; $a0 < $t; $a0++){
    fscanf($handle,"%d",$n);
    $h = 1;
    for ($i = 0; $i < $n; $i++) $i % 2 == 0 ? $h *= 2 : $h += 1;
    echo $h."\n";
}

/* code by hackkerrank
c++:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T, N, i;
    cin >> T;
    while(T--) {
        cin >> N;
        long long int s = 1;
        for (i = 1; i <= N; i++) {
            if(i % 2 == 0)
                s++;
            else
                s = 2*s;
        }
        cout << s << endl;
    }
    return 0;

    or:
c++:
    #include <bits/stdc++.h>

using namespace std;

int fast_exp(int base, int exp) {
    int res = 1;
    while (exp > 0) {
       if (exp % 2 == 1) res = (res * base);
       base = (base * base);
       exp /= 2;
    }
    return res;
}

int main() {
    int t;
    int n, i;
    cin >> t;
    for (i = 0; i< t; i++) {
        cin >> n;
        cout << fast_exp(2, (n + 1) / 2 + 1) - 1 - (n % 2) << endl;
    }
    return 0;
}

or
python:
for _ in range(input()):
    n=input()
    print pow(2,(n+1)/2+1)-1-(n%2)


*/

?>

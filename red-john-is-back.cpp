#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	const int C = 4;
	int T(0); scanf("%d", &T);
	while (T--) {
		int N(0); scanf("%d", &N);
		long *c = new long[N + 1];
		for (int i = 0; i <= N; i++) {
			if (i < C) c[i] = 1;
			else c[i] = c[i - 1] + c[i - C];
		}
		long ways = c[N];
		bool *p = new bool[ways + 1];
		p[0] = p[1] = 0; for (int i = 2; i <= ways; i++) p[i] = 1;
		for (long i = 2; i <= sqrt(ways); i++) {
			if (!p[i]) continue;
			for (long j = 2 * i; j <= ways; j += i) p[j] = 0;
		}
		long total(0);
		for (int i = 2; i <= ways; i++) total += p[i];
		cout << total << endl;
	}
	return 0;
}

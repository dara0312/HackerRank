#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long s(long long n) { return n * (n + 1) / 2; }

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		long long N;
		scanf("%lld", &N);
		N -= 1;
		printf("%lld\n", s(N / 3) * 3 + s(N / 5) * 5 - s(N / 15) * 15);
	}
	return 0;
}
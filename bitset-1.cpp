#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define set_bit(n,p) (n[p/32] |= (1 << (p%32)))
#define test_bit(n,p) (n[p/32] & (1 << (p%32)))


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	const int max = (1LL << 31) - 1;
	vector<int> bit_array(max / 32);
	int n, s, p, q;
	cin >> n >> s >> p >> q;
	int total = 1;
	unsigned long long m, m1;
	m = s & max;
	set_bit(bit_array, m);
	for (int i = 0; i < (n - 1); i++) {
		m1 = (m*p + q)&max;
		if (!test_bit(bit_array, m1)) {
			set_bit(bit_array, m1);
			total++;
		}
		m = m1;
	}
	cout << total << endl;
	return 0;
}

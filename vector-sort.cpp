#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) { cin >> v[i]; }
	sort(v.begin(), v.end());
	for (int a : v) { cout << a << " "; }
	return 0;
}

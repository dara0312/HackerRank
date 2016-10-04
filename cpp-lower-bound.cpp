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
	int next, index;
	cin >> next;
	for (int j = 0; j < next; j++) {
		cin >> index;
		vector<int>::iterator it = lower_bound(v.begin(), v.end(), index);
		cout << ((index == *it) ? "Yes" : "No ") << (distance(v.begin(), it) + 1) << endl;
	}
	return 0;
}
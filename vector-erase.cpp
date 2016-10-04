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
	int pos, rangea, rangeb;
	cin >> pos >> rangea >> rangeb;
	v.erase(v.begin() + pos - 1);
	v.erase(v.begin() + rangea - 1, v.begin() + rangeb - 1);
	cout << v.size() << endl;
	for (int a : v) { cout << a << " "; }
	return 0;
}

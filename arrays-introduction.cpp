#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	vector<int> nlist;
	int n, val;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> val;
		nlist.push_back(val);
	}
	reverse(nlist.begin(), nlist.end());
	for (int i : nlist)
		cout << i << " ";
	return 0;
}

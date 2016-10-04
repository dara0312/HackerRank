#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	vector<string> n = { "zero","one","two","three","four","five","six","seven","eight","nine" };
	int i;
	cin >> i;
	if (i > 9) cout << "Greater than 9";
	else cout << n[i];
	return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	cin >> n;
	int option, val;
	set<int> st;
	for (int i = 0; i < n; i++) {
		cin >> option >> val;
		if (option == 1) st.insert(val);
		if (option == 2) st.erase(val);
		if (option == 3) cout << ((*st.find(val) == *st.end()) ? "No" : "Yes") << endl;
	}

	/*
	*/
	int n;
	cin >> n;
	int option, val;
	set<int> st;
	bool found;
	for (int i = 0; i < n; i++) {
		cin >> option >> val;
		if (option == 1) st.insert(val);
		if (option == 2) st.erase(val);
		if (option == 3) {
			for (int a : st) {
				if (val == a) found = true;
			}
			if (found == true) cout << "Yes" << endl;
			else cout << "No" << endl;
			found = false;
		}
	}

	/* valid
	*/
	int n, opt, val;
	std::set<int> st;
	for (scanf("%d", &n); n--;) {
		scanf("%d%d", &opt, &val);
		if (opt == 1) st.insert(val);
		if (opt == 2) st.erase(val);
		if (opt == 3) puts(st.find(val) != st.end() ? "Yes" : "No");
	}

	return 0;
}
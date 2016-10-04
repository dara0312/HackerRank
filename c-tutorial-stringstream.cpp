#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
	istringstream ss(str);
	vector<int> v(0);
	string s; int j;
	while (getline(ss, s, ',')) {
		v.insert(v.end(), atoi(s.c_str()));
	}
	return v;
}

int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for (int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}

	return 0;
}

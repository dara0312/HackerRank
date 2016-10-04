#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>
#include <bits/stdc++.h>
#include <string>
using namespace std;

struct node {
	string name;
	vector<pair<string, string>> par;
	bool child;

	node() {}
	node(string n, vector<pair<string, string>> p, bool f) {
		name = n;
		par = p;
		child = f;
	}
};

vector<string> parse(string s) {
	stringstream ss;
	ss << s;
	string t;
	vector<string> token;
	while (ss >> t) {
		if (t[0] == '<') t = t.substr(1);
		if (t[t.size() - 1] == '>') t.pop_back();
		token.push_back(t);
	}
	return token;
}

vector<pair<string, string>> get_param(vector<string> t) {
	vector<pair<string, string>> p;
	for (int i = 1; i + 1 < t.size(); ++i) {
		if (t[i] == "=") {
			string tmp = t[i + 1];
			string tmp2;
			for (int j = 0; j < tmp.size(); ++j) {
				if (tmp[j] != '"' && tmp[j] != '>' && tmp[j] != '<')
					tmp2.push_back(tmp[j]);
			}
			p.push_back({ t[i - 1], tmp2 });
		}
	}
	return p;
}

int main() {
	int n, q;

	string s, token;
	getline(cin, s);

	vector<string> t = parse(s);
	n = atoi(t[0].c_str());
	q = atoi(t[1].c_str());

	map<string, node> tag_value;
	map<string, vector<string>> map1;

	vector<string> v;

	for (int i = 0; i < n; ++i) {
		getline(cin, s);

		vector<string> cur = parse(s);
		string tag = cur[0];

		if (!v.size()) {
			v.push_back(tag);
			tag_value[tag] = node(tag, get_param(cur), 0);
			continue;
		}

		if (tag.find("/") != string::npos) {
			v.pop_back();
		}
		else {
			tag_value[tag] = node(tag, get_param(cur), 1);
			map1[v.back()].push_back(tag);
			v.push_back(tag);
		}
	}

	for (int i = 0; i < q; ++i) {
		getline(cin, s);

		for (int j = 0; j < s.size(); ++j) if (s[j] == '.') s[j] = ' ';
		if (s.find("~") == string::npos) {
			cout << "Not Found!" << endl;
			continue;
		}

		string param_name;
		while (s.back() != '~') {
			param_name.push_back(s.back());
			s.pop_back();
		}
		s.pop_back();
		reverse(param_name.begin(), param_name.end());
		vector<string> t = parse(s);
		string parent = t[0];
		if (tag_value[parent].child) {
			cout << "Not Found!" << endl;
			continue;
		}

		string last = parent;
		int ok = true;
		for (int j = 1; j < t.size(); ++j) {
			vector<string> childs = map1[parent];
			last = t[j];
			int found = false;
			for (int k = 0; k < childs.size(); ++k) {
				if (childs[k] == last) {
					found = true;
					break;
				}
			}

			if (!found) {
				ok = false;
				break;
			}
			parent = t[j];
		}

		if (ok) {
			int found = false;
			vector<pair<string, string>> params = tag_value[last].par;
			for (int j = 0; j < params.size(); ++j) if (param_name == params[j].first) {
				cout << params[j].second << endl;
				found = true;
				break;
			}
			if (!found) cout << "Not Found!" << endl;
		}
		else cout << "Not Found!" << endl;
	}

	return 0;
}
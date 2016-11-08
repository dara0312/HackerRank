#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int N, j; string s;

	for(cin >> N; N--;) {
		cin>>s;
		for (j=0; j<s.size()/2; j++) if (abs(s[j]-s[j+1]) - abs(s[s.size()-j-1]-s[s.size()-j-2])) break;
		if (j < s.size()/2) printf("Not ");
		puts("Funny");
	}

}

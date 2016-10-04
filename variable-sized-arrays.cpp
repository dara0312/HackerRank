#include <iostream>
using namespace std;

int main() {
	int m, q;
	cin >> m >> q;
	int **val = new int*[m];
	for (int i = 0; i < m; i++) {
		int n;
		cin >> n;
		int *row = new int[n];
		for (int j = 0; j < n; j++) {
			int a;
			cin >> a;
			row[j] = a;
		}
		val[i] = row;
	}
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		cout << val[a][b] << endl;
	}
	return 0;
}

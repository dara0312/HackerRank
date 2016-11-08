#include<stdlib.h>
#include<stdio.h>
#include<fstream>
#include<string>
#include<vector>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<ctype.h>
#include<map>
#include <bitset>
using namespace std;
int i, n, k, v[111111], poz, ok, j, nr;

int main()
{
	cin >> n;
	cin >> k;
	for (i = 1; i <= n; i++)
	{
		cin >> v[i];
	}
	k--;
	poz = 1;
	for (i = k + 1; i <= n+k; i += k * 2 + 1)
	{
		ok = 0;
		for (j = i; j >= i - k; j--)
			if (v[j] == 1)
			{
				i = j;
				nr++;
				ok = 1;
				break;
			}
		if (ok == 0)
		{
			for (j = i - k; j >= i - 2 * k; j--)
				if (v[j] == 1)
				{
					i = j;
					nr++;
					ok = 1;
					break;
				}
			if (ok == 0)
			{
				cout << -1;
				return 0;
			}
		}

	}
	if (i - k <= n)
	{
		ok = 0;
		for (j=i; j >= i - k; j--)
			if (v[j] == 1)
				ok = 1;
		if (ok)
			cout << nr;
		else
			cout << -1;
	}
	else
		cout << nr;
	return 0;
}

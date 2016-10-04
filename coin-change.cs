using System;
using System.Collections.Generic;
using System.IO;

class Solution
{

    static int count(int[] c, int m, int n)
    {
        if (n == 0) return 1;
        if (n < 0) return 0;
        if (m <= 0 && n >= 1) return 0;
        return count(c, m - 1, n) + count(c, m, n - c[m - 1]);
    }

    static void Main(String[] args)
    {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */
        string[] line = Console.ReadLine().Split(' ');
        int n = Convert.ToInt32(line[0]);
        int m = Convert.ToInt32(line[1]);
        string[] a_tmp = Console.ReadLine().Split(' ');
        int[] c = new int[m];
        for (int i = 0; i < m; i++)
        {
            c[i] = Convert.ToInt32(a_tmp[i]);
        }
        Console.WriteLine(count(c, m, n));
    }
}

/* cpp */
 * 
    #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;

int count(int c[], int m, int n)
{
    int table[n + 1];
    memset(table, 0, sizeof(table));
    table[0] = 1;
    for (int i = 0; i < m; i++)
        for (int j = c[i]; j <= n; j++)
            table[j] += table[j - c[i]];
    return table[n];
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    cin >> n >> m;
    int c[m];
    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        c[i] = q;
    }
    cout << count(c, m, n);
    return 0;
}

/*cpp ok*/
 * #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long count(int n, vector<int> c)
{
    vector<long> m(n + 1);
    m[0] = 1;
    for (auto & c1:c)
    {
        for (int i = c1; i <= n; i++)
        {
            m[i] += m[i - c1];
        }
    }
    return m[n];
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    cin >> n >> m;
    vector<int> c;
    int a;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        c.push_back(a);
    }
    cout << count(n, c) << endl;
    return 0;
}

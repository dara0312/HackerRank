/*10
2
4
2
6
1
7
8
9
2
1

2 4 2 6 1 7 8 9 2 1
1 2 1 2 1 2 3 4 2 1

1 2 2
1 2 1*/
using System;
using System.Collections.Generic;
using System.IO;
class Solution
{
    static void Main(String[] args)
    {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */
        int N = Convert.ToInt32(Console.ReadLine());
        var rate = new List<int>();
        var candies = new List<int>();
        int candy = 0; int total = 0;
        for (int i = 0; i < N; i++)
        {
            int r = Convert.ToInt32(Console.ReadLine());
            rate.Add(r);
        }
        //rate.Sort();
        for (int i = 0; i < N; i++)
        {
            if (i == 0) candy = 1; else if (rate[i] > rate[i - 1]) candy++; else candy = 1;
            candies.Add(candy);
        }
        for (int i = N - 2; i >= 0; i--) { if (rate[i] > rate[i + 1] && candies[i] <= candies[i + 1]) candies[i] = candies[i + 1] + 1; }
        for (int i = 0; i < N; i++) { total += candies[i]; }
        Console.WriteLine(total);

    }
}


//// ok

using System;
using System.Collections.Generic;
using System.IO;
class Solution
{
    static void Main(String[] args)
    {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */
        int N = Convert.ToInt32(Console.ReadLine());
        long[] rate = new long[N];
        long[] candies = new long[N];
        long total = 0;
        for (int i = 0; i < N; i++)
        {
            int r = Convert.ToInt32(Console.ReadLine());
            rate[i] = r;
        }
        candies[0] = 1;
        for (int i = 1; i < N; i++)
        {
            if (rate[i - 1] < rate[i]) candies[i] = candies[i - 1] + 1;
            else candies[i] = 1;
        }
        for (int i = N - 2; i >= 0; i--)
        {
            if (rate[i] > rate[i + 1] && candies[i] <= candies[i + 1]) candies[i] = candies[i + 1] + 1;
        }
        for (int i = 0; i < N; i++) { total += candies[i]; }
        Console.WriteLine(total);
    }
}
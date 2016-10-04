using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class Solution
{

    static void Main(String[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine());
        int[][] a = new int[n][]; int total1 = 0; int total2 = 0;
        for (int a_i = 0; a_i < n; a_i++)
        {
            string[] a_temp = Console.ReadLine().Split(' ');
            a[a_i] = Array.ConvertAll(a_temp, Int32.Parse);
            for (int b_i = 0; b_i < n; b_i++)
            {
                if (a_i == b_i)
                {
                    total1 += a[a_i][b_i];
                }
                if ((a_i + b_i) == (n - 1))
                {
                    total2 += a[a_i][b_i];
                }
            }
        }
        Console.WriteLine(Math.Abs(total1 - total2));
    }
}
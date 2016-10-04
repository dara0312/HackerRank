using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class Solution
{

    static void Main(String[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine());
        string[] arr_temp = Console.ReadLine().Split(' ');
        int[] arr = Array.ConvertAll(arr_temp, Int32.Parse);
        int positive = 0, negative = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0) positive++;
            else if (arr[i] < 0) negative++;
            else zero++;
        }
        Console.WriteLine("{0:f6}", Math.Round(((double)positive / n), 6));
        Console.WriteLine("{0:f6}", Math.Round(((double)negative / n), 6));
        Console.WriteLine("{0:f6}", Math.Round(((double)zero / n), 6));
    }
}
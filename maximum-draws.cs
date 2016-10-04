using System;
using System.Collections.Generic;
using System.IO;
class Solution
{
    static void Main(String[] args)
    {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */
        int n = Convert.ToInt32(Console.ReadLine());
        while (n > 0)
        {
            int ns = Convert.ToInt32(Console.ReadLine());
            int m = ns + 1;
            Console.WriteLine(m);
            n--;
        }
    }
}
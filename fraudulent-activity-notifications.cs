using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */
        string[] input = Console.ReadLine().Split(' ');
        int n = Convert.ToInt32(input[0]);
        int d = Convert.ToInt32(input[1]);
        string[] expenditures = Console.ReadLine().Split(' ');
        Console.WriteLine(cal(n, d, expenditures));
    }

    private static int cal(int n, int d, string[] expenditures) {
        int SIZE = 200; int[] priority = new int[SIZE];
        for (int i = 0; i < d; i++) {
            int x = Convert.ToInt32(expenditures[i]);
            priority[x]++;
        }
        int cnt = 0; int start = 0;
        for (int i = d; i < n; i++) {
            int tA = Convert.ToInt32(expenditures[i]);
            double medium = getMedium(priority, d);
            if (tA >= 2 * medium) cnt++;
            int tR = Convert.ToInt32(expenditures[start++]);
            priority[tR]--;
            priority[tA]++;
        }
        return cnt;
    }

    private static double getMedium(int[] arr, int days)
    {
        int SIZE = 200; int sum = 0;
        bool isEven = days % 2 == 0;
        int[] st = new int[SIZE];
        for (int i = 0; i < SIZE; i++) {
            sum += arr[i];
            st[i] = sum;
        }
        if(!isEven) return mediumByIn(st, days/2) * 1.0;
        else return (mediumByIn(st, days/2 -1) + mediumByIn(st, days/2))/ 2.0;
    }

    private static int mediumByIn(int[] st, int look)
    {
        for(int i = 0; i < st.Length; i++) {
            if (st[i] > look) return i;
        }
        return -1;
    }


}

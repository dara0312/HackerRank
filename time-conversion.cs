using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;

class Solution
{

    static void Main(String[] args)
    {
        string time = Console.ReadLine();
        string pattern = @"^(0[1-9]|1[0-2]):([0-5][0-9]):([0-5][0-9])(PM|AM)$";
        Regex r = new Regex(pattern, RegexOptions.IgnoreCase);
        Match match = r.Match(time);
        int hour, minute, second; string type;
        if (match.Success)
        {
            hour = Int32.Parse(match.Groups[1].Value);
            minute = Int32.Parse(match.Groups[2].Value);
            second = Int32.Parse(match.Groups[3].Value);
            type = match.Groups[4].Value;
            if (type == "AM" && hour == 12) hour = 0;
            if (type == "PM" && hour != 12) hour += 12;
            Console.WriteLine(hour.ToString("00") + ":" + minute.ToString("00") + ":" + second.ToString("00"));
        }
    }
}

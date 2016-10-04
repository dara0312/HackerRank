#include <iostream>
#include <vector>
using namespace std;

int GetRequiredCandies(vector<int> Students) {
	int N = Students.size();
	int TotalCandies = 0;

	vector<int> Left = vector<int>(N, 1);
	vector<int> Right = vector<int>(N, 1);

	for (int i = N - 2; i >= 0; i--) {
		if (Students[i + 1] < Students[i])
		{
			Right[i] = 1 + Right[i + 1];
			cout << i << " Student : " << Students[i] << " Right : " << Right[i] << endl;
		}
	}

	for (int i = 1; i < N; i++) {
		if (Students[i - 1] < Students[i]) {
			Left[i] = 1 + Left[i - 1];
			cout << i << " Student : " << Students[i] << " Left : " << Left[i] << endl;
		}
	}

	for (int i = 0; i < N; i++) {
		cout << i << " Student : " << Students[i] << " MaxR : " << Right[i] << " MaxL : " << Left[i] << " MaxFinal : " << max(Right[i], Left[i]) << endl;
		TotalCandies += max(Right[i], Left[i]);
	}

	return TotalCandies;
}

int main() {
	int N, Score;
	cin >> N;

	vector<int> Students;

	for (int i = 0; i < N; i++) {
		cin >> Score;
		Students.push_back(Score);
	}

	cout << GetRequiredCandies(Students) << endl;

	return 0;
}


///////////

using System;
using System.Collections.Generic;
using System.IO;

class Solution {
	static void Main(String[] args) {
		/* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */
		int N = Convert.ToInt32(Console.ReadLine());
		int[] rate = new int[N];
		int[] candies = new int[N];
		int total = 0;
		for (int i = 0; i < N; i++) {
			int r = Convert.ToInt32(Console.ReadLine());
			rate[i] = r;
		}
		//rate.Sort();
		for (int i = 0; i < N; i++) {
			if (i == 0)
				candies[i] = 1;
			else if (rate[i] > rate[i - 1]) candies[i] = candies[i - 1] + 1;
			else candies[i] = 1;
		}
		for (int i = N - 2; i >= 0; i--) { if (rate[i] > rate[i + 1] && candies[i] <= candies[i + 1]) candies[i] = candies[i + 1] + 1; }
		for (int i = 0; i < N; i++) { total += candies[i]; }
		Console.WriteLine(total);
	}
}
//link - https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=362
//Problem - Mixed Fraction
//Probelm Defination - 
/*
Mixed Fraction
Input File: mixin.txt
Output File: mixout.txt
Time Limit: 1 second

You are sitting at your computer surfing the internet when a chance forum post stirs memories of an idyllic past. There were so many different ways of representing rational numbers back then - percentages, decimals, and of course the mixed fraction. There was always something so wonderful about mixed fractions - the way they quickly told you how big the number was yet still conveyed the subtleties of the fractional part. Such elegance... You shed a silent tear for days long gone.

In this task you are given a fraction in the form n/d, where 1 <= d < n <= 1,000,000,000. Your task is to find the two integers a and b, where 0 <= b < d and ad + b = n. You do not need to (and shouldn't) simplify the fraction.

Input
A single line containing the integers n and d separated by a space.

Output
If b is not 0, print a single line in the format a b/d. Otherwise, print a.

Sample Input 1
22 6
Sample Output 1
3 4/6
Sample Input 2
49 7
Sample Output 2
7
*/


#include <bits/stdc++.h>

// Shortcuts for "common" data types in contests
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<ii>
#define si set<int>
#define msi map<string, int>

// To simplify repetitions/loops
#define REP(i, a, b) \
	for (int i = int(a); i <= int(b); i++) // a to b, and variable i is local!
#define TRvi(c, it) \
	for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
	for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
	for (msi::iterator it = (c).begin(); it != (c).end(); it++)

using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("sitin.txt", "r", stdin);
	freopen("sitout.txt", "w", stdout);

	ll r, s;
	cin >> r >> s;

	int totalSeats = r * s;

	int tickets;
	cin >> tickets;

	if (tickets > totalSeats)
	{
		cout << totalSeats << " " << tickets - totalSeats;
	}
	else
	{
		cout << tickets << " " << 0;
	}

	return 0;
}
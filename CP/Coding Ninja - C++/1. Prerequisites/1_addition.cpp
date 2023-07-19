//link - https://orac.amt.edu.au/cgi-bin/train/problem.pl?problemid=333
//Problem - Addition
//Probelm Defination - 
/*
Input File: addin.txt
Output File: addout.txt
Time Limit: 1 second

Your task here is a straight-forward one: you are to write a program that takes two numbers and adds them together. Luckily, computers are built for adding numbers together and will do all the calculation for you - all you need to do is write code that will correctly read from and write to the text files.

Input
The input file will consist of the two integers a and b separated by a single space. It is guaranteed that 0 <= a, b <= 1,000,000,000.

Output
Your output file should consist of a single integer, the sum of a and b.

Sample Input
23 45
Sample Output
68
Scoring
The score for each input file will be 100% if the correct answer is written to the output file and 0% otherwise.
*/

#include <bits/stdc++.h>

// Shortcuts for "common" data types in contests
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<ii>
#define si set<int>
#define msi map<string, int>
#define end "\n"

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

	freopen("addin.txt","r",stdin);
	freopen("addout.txt","w",stdout);

	ll a,b;
	cin>>a>>b;

	ll sum = a + b;

	cout<<sum;

	return 0;
}
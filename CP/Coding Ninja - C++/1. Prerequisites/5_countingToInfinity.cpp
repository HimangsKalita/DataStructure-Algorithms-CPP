//link - https://orac.amt.edu.au/cgi-bin/train/problem.pl?problemid=383
//Problem - Counting to Infinity
//Probelm Defination - 
/*
Input File: countin.txt
Output File: countout.txt
Time Limit: 1 second

Don't let the title fool you: in this problem, all your program needs to do is to count as high as ten thousand. Specifically, it must read in the integer n and list all the integers from 1 to n.

Input
The input file will consist of a single integer, n. It is guaranteed that 1 <= n <= 10,000.

Output
Your output file should consist of the integers from 1 to n in increasing order, separated by line breaks.

Sample Input
8
Sample Output
1
2
3
4
5
6
7
8
*/

#include <bits/stdc++.h>

// Shortcuts for "common" data types in contests
#define ll long long
#define end "\n"
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

	freopen("countin.txt", "r", stdin);
	freopen("countout.txt", "w", stdout);

  int n;
  cin>>n;

	for (int i = 1; i <=n; i++)
  {
    cout<<i<<end;
  }
  
	
	return 0;
}
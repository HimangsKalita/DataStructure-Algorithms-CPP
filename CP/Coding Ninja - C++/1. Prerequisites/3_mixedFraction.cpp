//link - https://orac.amt.edu.au/cgi-bin/train/problem.pl?problemid=342
//Problem - Sitting or Standing?
//Probelm Defination - 
/*
Input File: sitin.txt
Output File: sitout.txt
Time Limit: 1 second

A local musician is putting on a concert to raise money for charity. The concert will be held in the town hall, a spacious venue perfectly suited for such an event. There are r rows of seats, each containing exactly s seats. At most one person can sit on a single seat (that is, two people cannot share a seat).

There is a problem - the concert may have been overbooked! This means that if everybody who bought tickets comes to the concert, some of them might have to stand. Now the musician has aproached you, not for advice, but for the answer to the following question: if everybody who bought tickets arrives and tries to find a seat, how many people will end up sitting, and how many people will be standing?

Input
The first line of the input file will consist of the two integers r and s: the number of rows and the number of seats per row in that order. It is guaranteed that 0 <= r, s <= 10,000. The second line will contain a single integer between 0 and 1,000,000,000: the number of tickets that have been bought.

Output
Your output file should consist of two integers separated by a space: the number of people sitting and standing respectively.

Remember, everybody tries to sit if they can. If the concert has been overbooked, you will not be able to seat them all.

Sample Input
7 12
100
Sample Output
84 16
Explanation
The first line of input says that there are 7 rows of 12 seats each (i.e. 7 x 12 = 84 seats total). The second line says that 100 people have booked tickets. Since there aren't enough seats for all of them, only 84 people may sit and the remaining 16 must stand.
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

	freopen("mixin.txt","r",stdin);
	freopen("mixout.txt","w",stdout);

	int n,d;
	cin>>n>>d;

	ll div = n/d, rem = n%d;

	int a = div,b = rem;

	if (b)
	{
		cout<<a<<" "<<b<<"/"<<d;
	}else
	{
		cout<<a;
	}

	return 0;
}
/*
PRE4

There are ‘n’ number of villages. You are given an array of size ‘n’ representing the population of each village. Every year, there is a cricket competition between two teams and villagers who come to see the match. Villagers from ith village and (n-i)-1th village (0 <= i < n/2) are combined and then formed groups of 10 people each. For e.g. villagers from villages 0 and n-1, 1 and n-2, 2 and n-3 are combined. The number of villages is always even. So, clearly there will be n/2 combinations from all the villages. You have to tell how many groups will be formed in each combination and how many villagers will be left without the complete group of 10 peoples.
Input Format:
First-line will have a single integer ‘n’ denotes the number of villages.
The second line will have ‘n’ space-separated integers denoting the population of villages.
Output format:
Print ‘n/2’ lines of two space-separated integers, first will be no. of groups and second will be villagers left without a group. The first line will have the result of a combination of 0 and n-1, second will have 1 and n-2 and so on.
Constraints:
1 <= n <= 10^5
1 <= Ai <= 10^6
‘n’ will always be even
Sample Input:
10
26 96 18 24 87 51 44 86 75 32
Sample Output:
5 8
17 1
10 4
6 8
13 8
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
	for (int i = int(p1); i <= int(p2); i++) // p1 to p2, and variable i is local!
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

	
	
	return 0;
}
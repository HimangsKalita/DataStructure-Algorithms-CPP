//link - https://orac.amt.edu.au/cgi-bin/train/problem.pl?problemid=382
//Problem - The Tremendous Tak-Tak Tree
//Probelm Defination - 
/*
The Tremendous Tak-Tak Tree
Input File: taktakin.txt
Output File: taktakout.txt
Time Limit: 1 second

Life is simple in the isolated village of Tak-Tak. Free of the noise and bustle of modern life, the villagers spend their days indulging their two great loves: farming and cooking. Their vegetable fields grow strong and tall, and their delicious communal meals brighten many an evening.

In the centre of the village sits a great sprawling tree, whose long boughs provide shade during the hot summers. The fruit of the Tak-Tak tree (as it is affectionately known) is renowned for its sweet, succulent taste.

Unlike normal plants, the Tak-Tak tree is not affected by weather or seasons. Instead, its fruits grow according to the cycles of the moon. Every month when the full moon is at its highest, each fruit on the tree shimmers and turns into two fruits. When the sun rises the villagers wake to find the number of fruits on the tree has doubled.

The villagers are planning a huge feast for this year. On the day of the feast they will remove all the fruit except one from the tree. This is to be divided equally between the village's eleven inhabitants, as they are a fair people. (No slicing or dicing is allowed - each villager must receive a whole number of fruits.) Afterwards the one remaining fruit on the Tak-Tak tree is left to begin the cycle anew.

If the villagers cannot evenly share the fruit with one left over, they shall wait until they can. They are very excited about the feast and would like to know how many full moons they must wait.

Input
The input file will consist of a single integer, the number of fruits initially on the tree. This will be between 2 and 1,000,000 inclusive.

Output
The output file should consist of two integers separated by a space: the least number of full moons the villagers must wait until the feast is possible, and the number of fruits on the tree at that time.

You are guaranteed that it will eventually be possible to hold the feast.

Sample Input 1
23
Sample Output 1
0 23
Sample Input 2
17
Sample Output 2
1 34
Sample Input 3
14
Sample Output 3
2 56
Explanation
In the first example, 23 = 2 x 11 + 1 is a good number for a feast (if each villager receives two Tak-Tak fruits, one is left over as planned). Because of this they do not need to wait; they may start the feast straight away.

In the second example, 17 is not a good number for a feast. After one full moon, the number of fruits has doubled, becoming 34 = 3 x 11 + 1. This is a good number for a feast.

In the third example, 14 is not a good number for a feast. After two full moons, the number of fruits has quadrupled, becoming 56 = 5 x 11 + 1. This is a good number for a feast.
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

	freopen("taktakin.txt", "r", stdin);
	freopen("taktakout.txt", "w", stdout);

	int n;
  cin>>n;

  int  month = 0;

  while (n%11 != 1)
  {
    n *= 2;
    month++;
  }
  

  cout<<month<<" "<<n;
	
	return 0;
}
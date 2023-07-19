//link - https://orac.amt.edu.au/cgi-bin/train/problem.pl?problemid=414
//Problem - Triple Hunting
//Probelm Defination - 
/*
Input File: tripin.txt
Output File: tripout.txt
Time Limit: 1 second

In this somewhat silly problem, you must write a program that reads in a list of non-negative integers and identifies all the 'triples' - the multiples of three. For the purposes of this problem, a triple is defined as any number that can be expressed in the form (3 * integer) - so 0 and 3 are also considered to be triples.

To make things a little more complicated, once you identify all the triples you will need to output their locations in the original list.

Input
The first line of the input will consist of the single integer n, the number of integers in the list. (1 <= n <= 50,000)

Following this will be n lines describing the list, each containing a single integer between 0 and 2,000,000,000.

Output
If there were any multiples of three in the list, the first line of your output should contain the single integer k, the number of triples found. The second line should contain k space-separated integers, describing the positions of the triples, in ascending order. (For example, if the 5th number in the list is a triple, you should output "5".)

If there are no triples in the list at all, you are instead to output "Nothing here!" on a single line.

Sample Input 1
7
10
12
8
9
3
29
30
Sample Output 1
4
2 4 5 7
Sample Input 2
7
16
49
2
10
28
55
31
Sample Output 2
Nothing here!
Explanation
In the first example, four of the integers in the list are triples: the 2nd, 4th, 5th and 7th. (Their values are 12 = 3x4, 9 = 3x3, 3 = 3x1, and 30 = 3x10.) In the second example there are no triples in the list.
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

	freopen("tripin.txt", "r", stdin);
	freopen("tripout.txt", "w", stdout);

	int n;
  cin>>n;

  int arr[n], count = 0;

  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
    if (arr[i]%3 == 0)
    {
      count++;
    }
    
  }

  if (count != 0)
  {
    cout<<count<<end;
    for (int i = 0; i < n; i++)
    {
      if (arr[i]%3 == 0)
      {
        cout<<i+1<<" ";
      }
    }
  }
  else
  {
    cout<<"Nothing here!"<<end;
  }

	return 0;
}

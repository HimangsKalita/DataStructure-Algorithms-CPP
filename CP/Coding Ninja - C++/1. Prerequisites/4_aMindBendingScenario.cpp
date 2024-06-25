// link - https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=372
// Problem - A Mindbending Scenario
// Probelm Defination -
/*
Imagine a universe far different to the one we know. One where where people can walk through walls, where politicians don't lie, where the rules of physics itself are bent on a daily basis. Imagine how strange it would be to land in that universe, having to adjust to entirely new laws of reality, and having to integrate yourself into sentient cultures far beyond human comprehension.

Now, imagine that everything in this universe was suddenly destroyed in a cataclysmic explosion, leaving nothing but two rectangles on an endless plane. These two rectangles have their corners at integer co-ordinates (rational numbers having been destroyed). Your task is to discover the total area of the plane which is covered by these rectangles.

Beware! Some parts of the plane may be covered by both rectangles. If you merely add the individual areas together, you are surely doomed to incorrect answers!

Input
The input file will consist of two lines. Each line will be of the form x1 y1 x2 y2, describing the bottom-left and top-right corners of one rectangle. You are guaranteed that 0 <= x1 < x2 <= 10,000, and 0 <= y1 < y2 <= 10,000. (That is, each rectangle is at least one unit square in size.)

Output
Your output file should consist of a single integer: the total area covered by rectangles. (Remember - the rectangles may overlap!)

Sample Input
1 1 3 4
2 3 6 7
Sample Output
21

Explanation
The sample data describes the following two rectangles:
https://orac.amt.edu.au/cgi-bin/train/support.pl?set=simple1&problemid=372&file=img1.png

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

  freopen("bendin.txt", "r", stdin);
  freopen("bendout.txt", "w", stdout);

  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int x3, y3, x4, y4;
  cin >> x3 >> y3 >> x4 >> y4;

  ll area1 = (x2-x1)*(y2-y1);
  ll area2 = (x4-x3)*(y4-y3);
  ll totalArea = area1 + area2, same = 0;

  int left= max(x1,x3);
  int right = min(x2,x4);
  int btm = max(y1,y3);
  int up = min(y2,y4);  


  if (left < right && btm < up)
  {
    same = (right - left) * (up - btm);
  }

  cout<<totalArea - same;

  return 0;
}
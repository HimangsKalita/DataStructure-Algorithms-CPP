//link - https://orac.amt.edu.au/cgi-bin/train/problem.pl?problemid=416
//Problem - Friendlist
//Probelm Defination - 
/*
The face of electronic gaming has changed dramatically over the past few decades. Forget text adventure games and rickety Asteroids cabinets - these days it's all about ultra-realistic graphics, motion-sensing wands and high-end CPUs. But despite all this, simple games with basic rules and crisp art are doing as well as ever. One such game is Friendlist, a multiplayer game requiring nothing more than an internet browser to play.

In Friendlist, players add each other as 'friends' based on looks, reputation, or even real life connections. (Friendship is mutual: if Alice has Bob as a friend, then Bob has Alice as a friend too. Of course, people cannot be friends with themselves.) As the game progresses, dedicated players can grind their way through quiz-like minigames in order to impress their peers. However, adding 'friends' to one's friendlist remains the cornerstone of the game. The bigger the friendlist, the better the player.

The object of the game is to have the biggest friendlist (that is, the most friends). Your task here is to take a list of Friendlist friendships and determine the winner. There may be more than one person tied for first place: if so, your program should list them all.

Input
The first line of input will contain the integer f, 1 <= f <= 1,000,000.

Each of the following f lines will be of the form a b, where a and b are different player IDs. This indicates that player #a is friends with player #b, and vice versa. All player IDs are integers between 0 and 1000 inclusive.

(Note that no friendship will ever be listed twice: for example, if "2 5" is one of the lines in the input, then neither "2 5" nor "5 2" will appear anywhere else in the input.)

Output
Output should consist of all the player IDs that are tied for biggest friendlist. These IDs should be given in ascending order.

Sample Input 1
6
5 6
0 1
1 4
5 4
1 2
4 0
Sample Output 1
1
4
Explanation
The input above describes the following set of friendships:

Player ID	Friendlist
0	1, 4
1	0, 2, 4
2	1
3	(none)
4	0, 1, 5
5	4, 6
6	5
Players 1 and 4 are tied for biggest friendlist.

Sample Input 2
3
123 456
456 789
100 200
Sample Output 2
456
Explanation
In this case, player 456 clearly has the biggest friendlist (two friends).
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

	freopen("listin.txt", "r", stdin);
	freopen("listout.txt", "w", stdout);

	int f;
  cin>>f;

  int arr[1001] = {0};

  int a, b;

  for (int i = 0; i < f; i++)
  {
    cin>>a>>b;

    arr[a]++;
    arr[b]++;
  }

  int max = 0;

  for (int i = 0; i < 1001; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
    
  }
  
  for (int i = 0; i < 1001; i++)
  {
    if (arr[i] == max)
    {
      cout<<i<<end;
    }
    
  }

	return 0;
}

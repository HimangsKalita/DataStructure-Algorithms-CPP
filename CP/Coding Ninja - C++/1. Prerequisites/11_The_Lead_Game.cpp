// link - https://www.codechef.com/problems/TLG
// Problem - The Lead Game
// Probelm Defination -
/*
Problem
The game of billiards involves two players knocking 3 balls around on a green baize table. Well, there is more to it, but for our purposes this is sufficient.

The game consists of several rounds and in each round both players obtain a score, based on how well they played. Once all the rounds have been played, the total score of each player is determined by adding up the scores in all the rounds and the player with the higher total score is declared the winner.

The Siruseri Sports Club organises an annual billiards game where the top two players of Siruseri play against each other. The Manager of Siruseri Sports Club decided to add his own twist to the game by changing the rules for determining the winner. In his version, at the end of each round, the cumulative score for each player is calculated, and the leader and her current lead are found. Once all the rounds are over the player who had the maximum lead at the end of any round in the game is declared the winner.

Consider the following score sheet for a game with 5 rounds:

Round	Player 1	Player 2
1	    140	        82
2	     89	        134
3	     90	        110
4	    112	        106
5	    88	        90
The total scores of both players, the leader and the lead after each round for this game is given below:

Round	Player 1	Player 2	Leader	   Lead
1	     140	      82	     Player 1	  58
2	     229	     216	     Player 1	  13
3	     319	     326	     Player 2	  7
4	     431	     432	     Player 2	  1
5	     519	     522	     Player 2	  3
Note that the above table contains the cumulative scores.

The winner of this game is Player 1 as he had the maximum lead (58 at the end of round 1) during the game.

Your task is to help the Manager find the winner and the winning lead. You may assume that the scores will be such that there will always be a single winner. That is, there are no ties.

Input

The first line of the input will contain a single integer N (N ≤ 10000) indicating the number of rounds in the game. Lines 2,3,...,N+1 describe the scores of the two players in the N rounds. Line i+1 contains two integer Si and Ti, the scores of the Player 1 and 2 respectively, in round i. You may assume that 1 ≤ Si ≤ 1000 and 1 ≤ Ti ≤ 1000.

Output

Your output must consist of a single line containing two integers W and L, where W is 1 or 2 and indicates the winner and L is the maximum lead attained by the winner.

Sample 1:
Input
5
140 82
89 134
90 110
112 106
88 90

Output
1 58
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

  int n;
  cin>>n;

  int p1Score = 0,p2Score = 0,lead = INT_MIN,winner;

  while (n--)
  {
    int s1,s2;
    cin>>s1>>s2;
    
    p1Score += s1;
    p2Score += s2;

    if (p1Score > p2Score)
    {
      if (p1Score - p2Score > lead)
      {
        lead = p1Score - p2Score;
        winner = 1;
      }
      
    }else
    {
      if (p2Score - p1Score > lead)
      {
        lead = p2Score - p1Score;
        winner = 2;
      }
    }
    
  }

  if (winner == 1)
  {
    cout<<winner<<" "<<lead;
  }else
  {
    cout<<winner<<" "<<lead;
  }
  
  

  return 0;
}
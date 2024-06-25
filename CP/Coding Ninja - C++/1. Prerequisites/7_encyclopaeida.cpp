// link - https://orac.amt.edu.au/cgi-bin/train/problem.pl?problemid=412
// Problem - Encyclopædia
// Probelm Defination -
/*
Input File: encyin.txt
Output File: encyout.txt
Time Limit: 1 second

Once again it is quiz night at the My Very First Encyclopedia Appreciation Society. For week after week, you have turned up to these quizzes, deftly answering question after question about zoo animals and days of the week, only for someone else to answer all the obscure bonus-round questions at the end, snatching first place and leaving you with nothing but a 'Nice Try!' sticker.

Dejected and disheartened, you are sitting at home musing upon your past failures, when a thought occurs to you. Could it be...? Riffling through months of angrily scribbled notes, you confirm your sneaking suspicion - the bonus questions follow a super-simple pattern! Your heart skips a beat. Every question in every bonus round of every quiz you've sat through has been phrased in the form: "How many words are there on page x of the My Very First Encyclopedia?" Normally you would consider that a little unlikely, even contrived, but not today - today you have a Mars bar to win.

With infinite care you compile a list of page numbers and their corresponding word counts. Others in your place might try to memorise the list, but no, your plan is far more hi-tech: first, you will write a program that can answer these questions for you; then, you will sneak your trusty laptop into the quiz, and proceed to blitz the competition.

All that's left is for you to actually write the program. The task seems simple: it has to take your list of numbers and tonight's bonus questions, and - quietly - print out the correct answers for you.

Input
The first line of the input will be of the form n q, where n is the number of pages in the encyclopedia, and q is the number of questions to be answered. (1 <= n, q <= 10,000)

Following this will be n lines, each describing a single page. The ith of these lines will contain the single integer pi, the number of words on page i. (0 <= pi <= 2,000,000,000)

Following this will be q lines, each describing a single question. Each of these lines will contain a single integer x, representing the question, "How many words are there on page x?" (1 <= x <= n)

Output
For each question, your program should write a single line of output. This line should contain a single integer, the number of words on the requested page.

Sample Input
6 5
1151
723
1321
815
780
931
4
3
4
5
1
Sample Output
815
1321
815
780
1151
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

  freopen("encyin.txt", "r", stdin);
  freopen("encyout.txt", "w", stdout);

  int n, q;
  cin >> n >> q;

  int words[n];

  for (int i = 0; i < n; i++)
  {
    cin >> words[i];
  }

  int page;

  for (int i = 0; i < q; i++)
  {
    cin >> page;
    cout << words[page - 1] << end;
  }

  return 0;
}
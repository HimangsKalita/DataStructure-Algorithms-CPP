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

	int n;
  cin>>n;

  int arr[n][n];

  int num = 11;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      arr[i][j] = num;
      num++;
    }
    num = num + 10 - n ;
  }
  
  cout<<end;

  int zz = 0;

  for (int i = 0; i < n; i++)
  {
    if (i%2 == 0)
    {
      zz = 0;
      for (int j = zz; j < n; j++)
      {
        cout<<arr[j][i]<<" ";
      }
    }else
    {
      zz = n-1;
      for (int j = zz; j >= 0; j--)
      {
        cout<<arr[j][i]<<" ";
      }
    }  

  }
	
	return 0;
}
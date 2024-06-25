#include <bits/stdc++.h>
using namespace std;

// Shortcuts for "common" data types in contests
#define ll long long
#define endd "\n"
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int> 
#define vii vector<pii>
#define si set<int>
#define sii set<int,int>
#define mi set<int>
#define mii map<int,int>
#define msi map<string, int>
#define pb push_back
// constexpr int mod = 1000000007; // to prevent overflow
#define mod 1000000007
#define inf (1LL<<60) // large infinity number using bitwise operator
#define deb(x) cout << "Case #" << x <<": "
#define read(x) int x; cin >> x
#define all(x) (x).begin(), (x).end()
// #define prDouble(x) cout << fixed << setprecision(10) << x
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

// To simplify loops
#define FR(a,b) for(int i = a; i < b; i++)
#define REP(i, a, b) for (int i = int(a); i <= int(b); i++) // a to b, and variable i is local(i.e variable name)
#define TRvi(c, it) for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) for (vii::iterator it = (c).begin(); it != (c).end(); it++)



int main(){

	ios::sync_with_stdio(0);   
	cin.tie(0);

	vector<int> arr;

	for (int i = 1; i < 11; ++i)
	{
		arr.push_back(i);
	}

	for(const auto& ele: arr)
	{
		cout<<ele<<" ";
	}cout<<endd;

	int n = 10;
	int k = 3;

	int sum = 0;

	// Naive approach

	for (int i = 0; i < n - k + 1; ++i)
	{
		int currSum = 0;

		for (int j = 0; j < k ; ++j)
		{
			currSum = currSum + arr[i+j];
		}

		sum = max(sum, currSum);
	}

	cout<<sum<<endd;

	sliding window approach

	sum = 0;

	REP(i,0,2) sum += arr[i];

	int maxSum = sum;

	for (int i = 3; i < arr.size(); ++i)
	{

		sum += arr[i];
		sum -= arr[i - 3];

		maxSum = max(sum, maxSum);

	}

	cout<<maxSum;

	return 0;
}
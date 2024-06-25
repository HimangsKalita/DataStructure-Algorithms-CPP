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

int maxSubArray(vector<int> &arr, int n, int k)
{	
	if (n == 1) return arr[0];
	if (n < k) return -1;

	int start = 0, end = 0;

	int sum = 0, maxSum = INT_MIN;

	while(end < n){

		sum += arr[end];

		if (end - start + 1 == k)
		{
			maxSum = max(sum, maxSum);

			sum -= arr[start];
			start++;
		}

		end++;
	}

	return maxSum;
}

int main(){

	ios::sync_with_stdio(0);   
	cin.tie(0);

	int n,k;
	cin>>n>>k;

	vector<int> arr(n);

	REP(i,0,n-1) cin>>arr[i];

	cout<<maxSubArray(arr, n, k);

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

	// Shortcuts for "common" data types in contests
	#define ll long long
	#define endd "\n"
	#define pb push_back
	#define mp make_pair
	#define ii pair<int, int>
	#define vi vector<int> 
	#define vii vector<ii>
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

int insertPos(vector<int> nums, int target){

	int start=0, end=nums.size()-1;
	int ans = nums.size();

	while(start <= end ){

		int mid = start + (end-start)/2;


		if (nums[mid] >= target)
		{
			ans = mid;
			end = mid - 1;

		}else 
		{
			start = mid + 1;
		}
	}

	return ans;
}

int main(){

	ios::sync_with_stdio(0);   
	cin.tie(0);

	read(t);

	while(t--){

		read(n);

		read(x);

		vector<int> nums(n);

		for (int i = 0; i < n ; ++i)
		{
			cin>>nums[i];
		}

		cout<<insertPos(nums, x)<<endd;
	}

	return 0;
}


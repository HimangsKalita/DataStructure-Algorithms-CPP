#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int n, int x){

	int start = 0, end = n-1;
	int ans = n;

	while(start <= end ){

		int mid = start + (end - start)/2;

		if (arr[mid] >= x)
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

		vector<int> nums(n);

		for (int i = 0; i < n ; ++i)
		{
			cin>>nums[i];
		}

		read(x);

		cout<<lowerBound(nums, n, x)<<endd;	
	}

	return 0;
}
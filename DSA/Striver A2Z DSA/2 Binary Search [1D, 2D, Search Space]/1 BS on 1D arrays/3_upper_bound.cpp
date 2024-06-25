#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> arr, int x, int n){

	int start = 0, end = n-1;
	int ans = n;

	while(start <= end){

		int mid = start + (end - start)/2;

		if (arr[mid] <= x)
		{
			start = mid + 1;
		}else {

			end = mid - 1;
			ans = mid;
		}
	}

	return ans;
}

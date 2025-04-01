// https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401?leftPanelTabValue=PROBLEM

//  Problem statement

// You're given a sorted array 'a' of 'n' integers and an integer 'x'.


// Find the floor and ceiling of 'x' in 'a[0..n-1]'.


// Note:

// Floor of 'x' is the largest element in the array which is smaller than or equal to 'x'.
// Ceiling of 'x' is the smallest element in the array greater than or equal to 'x'.


// Example:

// Input: 
// n=6, x=5, a=[3, 4, 7, 8, 8, 10]   

// Output:
// 4

// Explanation:
// The floor and ceiling of 'x' = 5 are 4 and 7, respectively.


// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :

// 6 8
// 3 4 4 7 8 10


// Sample Output 1 :

// 8 8


// Explanation of sample input 1 :

// Since x = 8 is present in the array, it will be both floor and ceiling.


// Sample Input 2 :

// 6 2
// 3 4 4 7 8 10


// Sample Output 2 :

// -1 3


// Explanation of sample input 2 :

// Since no number is less than or equal to x = 2 in the array, its floor does not exist. The ceiling will be 3.


// Constraints :

// 1 <= n <= 2 * 10^5      
// 1 <= a[i] <= 10^9
// Time limit: 1 sec

#include <bits/stdc++.h>
using namespace std;

int getFloor(vector<int> &arr, int n, int x) {

	int left = 0, right = n-1;

	int ans = -1;

	while(left <= right) {

		int mid = left + (right - left)/2;

		if(arr[mid] <= x) {

			ans = mid;
			left = mid + 1;
		}else{

			right = mid - 1;
		}
	}

	if (ans == -1)
	{
		return -1;
	}else {

		return arr[ans];
	}
}

int getCeil(vector<int> &arr, int n, int x) {

	int left = 0, right = n-1;

	int ans = -1;

	while(left <= right) {

		int mid = left + (right - left)/2;

		if(arr[mid] >= x) {

			ans = mid;

			right = mid - 1;
		}else{

			left = mid + 1;
		}
	}

	if (ans == -1)
	{
		return -1;
	}else {

		return arr[ans];
	}
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {

	int fl = getFloor(a, n, x);
	int cl = getCeil(a, n, x);

	pair<int, int> ans = {fl, cl};

	return ans;
}

int main(){

	ios::sync_with_stdio(false);   
	cin.tie(0);

	int n, x;
	cin>>n>>x;

	vector<int> arr(n);

	for (int i = 0; i < n;  ++i)
	{
		cin>>arr[i];
	}

	pair<int, int> ans = getFloorAndCeil(arr, n, x);

	cout<<ans.first<<" "<<ans.second;

	return 0;
}


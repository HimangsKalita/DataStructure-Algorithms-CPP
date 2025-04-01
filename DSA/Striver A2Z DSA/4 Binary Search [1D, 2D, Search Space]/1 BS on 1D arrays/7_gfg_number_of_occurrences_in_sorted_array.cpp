// https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-occurrence

// Given a sorted array, arr[] and a number target, you need to find the number of occurrences of target in arr[]. 

// Examples :

// Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 2
// Output: 4
// Explanation: target = 2 occurs 4 times in the given array so the output is 4.

// Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 4
// Output: 0
// Explanation: target = 4 is not present in the given array so the output is 0.

// Input: arr[] = [8, 9, 10, 12, 12, 12], target = 12
// Output: 3
// Explanation: target = 12 occurs 3 times in the given array so the output is 3.

// Constraints:
// 1 ≤ arr.size() ≤ 106
// 1 ≤ arr[i] ≤ 106
// 1 ≤ target ≤ 106

#include <bits/stdc++.h>
using namespace std;

int countFreq(vector<int>& arr, int target) {

	int n = arr.size();
	int freq = 0;

	for(int i=0;i<n;++i) {

		if(arr[i] == target) {

			freq++;
		}
	}

	return freq;
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

	cout<<countFreq(arr, x);

	return 0;
}


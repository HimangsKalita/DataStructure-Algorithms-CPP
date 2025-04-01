// https://leetcode.com/problems/search-insert-position/description/

// 35. Search Insert Position
// Solved
// Easy
// Topics
// Companies

// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.



// Example 1:

// Input: nums = [1,3,5,6], target = 5
// Output: 2

// Example 2:

// Input: nums = [1,3,5,6], target = 2
// Output: 1

// Example 3:

// Input: nums = [1,3,5,6], target = 7
// Output: 4



// Constraints:

//     1 <= nums.length <= 104
//     -104 <= nums[i] <= 104
//     nums contains distinct values sorted in ascending order.
//     -104 <= target <= 104


#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {

	int n = nums.size();

	int low = 0, high = n-1;

	while (low < high) {

		int mid = low + (high - low)/2;

		if (nums[mid] == target)
		{
			return mid;

		}else if (nums[mid] < target)
		{
			low = mid + 1;
		}else {

			high = mid;
		}
	}

	return (nums[low] < target ? low+1 : low);
}

int main(){

	ios::sync_with_stdio(false);   
	cin.tie(0);

	int n, x;
	cin>>n>>x;

	vector<int> nums(n);

	for (int i = 0; i < n;  ++i)
	{
		cin>>nums[i];
	}

	cout<<searchInsert(nums, x);

	return 0;
}


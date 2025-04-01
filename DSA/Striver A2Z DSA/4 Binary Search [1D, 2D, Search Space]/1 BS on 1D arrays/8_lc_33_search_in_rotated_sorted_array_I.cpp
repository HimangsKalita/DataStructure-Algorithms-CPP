// https://leetcode.com/problems/search-in-rotated-sorted-array/description/

// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.



// Example 1:

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

// Example 2:

// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1

// Example 3:

// Input: nums = [1], target = 0
// Output: -1


// Constraints:

//     1 <= nums.length <= 5000
//     -104 <= nums[i] <= 104
//     All values of nums are unique.
//     nums is an ascending array that is possibly rotated.
//     -104 <= target <= 104

#include <bits/stdc++.h>
using namespace std;

// Using Brute Force
// Time - O(n)
// Space - O(1)

// int search(vector<int>& nums, int target) {

//     int n = nums.size();

//     int ans = -1;

//     for(int i =0; i<n;++i) {

//         if(nums[i] == target) {

//             ans = i;
//         }
//     }

//     return ans;
// }

// Using Binary Search
// Time - O(LogN)
// Space - O(1)

int search(vector<int>& nums, int target) {

    int n = nums.size();

    int ans = -1;

    int start = 0, end = n-1;

    while(start < end){

        int mid = start + (end-start)/2;

        if (nums[start] <= target && target <= nums[mid])
        {
            ans = mid;
            end = mid;
        }else {

            start = mid + 1;
        }
    }

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

    cout<<search(arr, x);    

    return 0;
}
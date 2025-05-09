// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

// Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

// [4,5,6,7,0,1,2] if it was rotated 4 times.
// [0,1,2,4,5,6,7] if it was rotated 7 times.

// Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

// Given the sorted rotated array nums of unique elements, return the minimum element of this array.

// You must write an algorithm that runs in O(log n) time.



// Example 1:

// Input: nums = [3,4,5,1,2]
// Output: 1
// Explanation: The original array was [1,2,3,4,5] rotated 3 times.

// Example 2:

// Input: nums = [4,5,6,7,0,1,2]
// Output: 0
// Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.

// Example 3:

// Input: nums = [11,13,15,17]
// Output: 11
// Explanation: The original array was [11,13,15,17] and it was rotated 4 times. 



// Constraints:

// n == nums.length
// 1 <= n <= 5000
// -5000 <= nums[i] <= 5000
// All the integers of nums are unique.
// nums is sorted and rotated between 1 and n times.

#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {

    int n = nums.size();

    if (n == 0)
    {
        return -1;
    }
    if (n == 1)
    {
        return nums[0];
    }

    int ans = INT_MAX;

    int start = 0, end = n-1;

    // while(start <= end){

    //     int mid = start + (end-start)/2;

    //     if (nums[mid] <= ans)
    //     {
    //         ans = nums[mid];
    //     }

    //     if (nums[start] <= nums[mid])
    //     {
    //         if (nums[start]<=nums[end])
    //         {
    //             end = mid - 1;
    //         }else {

    //             start = mid + 1;
    //         }
    //     }else {

    //         end = mid - 1;
    //     }
    // }

    while(start <= end){

        int mid = start + (end-start)/2;

        if (nums[start]<=nums[mid])
        {
            if(nums[start] <= ans) {

                ans = nums[start];
            }
            start = mid+1;
        }else {

            if(nums[mid] <= ans) {

                ans = nums[mid];
            }
            end = mid - 1;
        }
    }

    return ans;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int> arr(n);

        for (int i = 0; i < n;  ++i)
        {
            cin>>arr[i];
        }

        cout<<findMin(arr)<<endl;   
    }

    return 0;
}
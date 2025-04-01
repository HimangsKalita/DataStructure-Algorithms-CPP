// https://leetcode.com/problems/find-peak-element/description/

// A peak element is an element that is strictly greater than its neighbors.

// Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

// You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

// You must write an algorithm that runs in O(log n) time.



// Example 1:

// Input: nums = [1,2,3,1]
// Output: 2
// Explanation: 3 is a peak element and your function should return the index number 2.

// Example 2:

// Input: nums = [1,2,1,3,5,6,4]
// Output: 5
// Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.



// Constraints:

// 1 <= nums.length <= 1000
// -231 <= nums[i] <= 231 - 1
// nums[i] != nums[i + 1] for all valid i.

#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& arr) {

    int n = arr.size();
    int left = 0, right = n - 1;

    int ans = -1;

    while(left <= right){

        int mid = left + (right - left)/2;

        if ((mid-1 == -1 || arr[mid-1] < arr[mid]) && (mid+1 == n ||  arr[mid] > arr[mid+1]))
        {
            return mid;
        }

        if (arr[mid] < arr[mid + 1])
        {
            left = mid + 1;
        }else {

            right = mid - 1;
        }
    }

    return -1;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    vector<int> arr(n);

    for (int i = 0; i < n;  ++i)
    {
        cin>>arr[i];
    }

    cout<<findPeakElement(arr);

    return 0;
}


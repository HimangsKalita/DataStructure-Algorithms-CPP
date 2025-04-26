// https://leetcode.com/problems/count-elements-with-maximum-frequency/description/

// 3005. Count Elements With Maximum Frequency
// Solved
// Easy
// Topics
// Companies
// Hint

// You are given an array nums consisting of positive integers.

// Return the total frequencies of elements in nums such that those elements all have the maximum frequency.

// The frequency of an element is the number of occurrences of that element in the array.



// Example 1:

// Input: nums = [1,2,2,3,1,4]
// Output: 4
// Explanation: The elements 1 and 2 have a frequency of 2 which is the maximum frequency in the array.
// So the number of elements in the array with maximum frequency is 4.

// Example 2:

// Input: nums = [1,2,3,4,5]
// Output: 5
// Explanation: All elements of the array have a frequency of 1 which is the maximum.
// So the number of elements in the array with maximum frequency is 5.



// Constraints:

//     1 <= nums.length <= 100
//     1 <= nums[i] <= 100

#include <bits/stdc++.h>
using namespace std;

int maxFrequencyElements(vector<int>& nums) {

    vector<int> ans(101, 0);

    int n = nums.size();

    for(int i=0; i<n; ++i) {

        ans[nums[i]]++;
    }

    int maxCount = INT_MIN;

    for(int i=0;i<n; ++i) {

        if(ans[nums[i]] > maxCount) {

            maxCount = ans[nums[i]];
        }
    }

    int totalCount = 0;

    for(int i=0;i<101;++i) {

        if(ans[i] == maxCount) {

            totalCount += maxCount;
        }
    }

    return totalCount;
    
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int> nums(n);

        for (int i = 0; i < n;  ++i)
        {
            cin>>nums[i];
        }

        cout<<maxFrequencyElements(nums)<<"\n";
    }

    return 0;
}
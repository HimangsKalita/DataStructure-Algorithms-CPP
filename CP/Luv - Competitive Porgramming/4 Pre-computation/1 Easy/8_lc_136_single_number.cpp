// https://leetcode.com/problems/single-number/description/

// 136. Single Number
// Solved
// Easy
// Topics
// Companies
// Hint

// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.



// Example 1:

// Input: nums = [2,2,1]

// Output: 1

// Example 2:

// Input: nums = [4,1,2,1,2]

// Output: 4

// Example 3:

// Input: nums = [1]

// Output: 1



// Constraints:

//     1 <= nums.length <= 3 * 104
//     -3 * 104 <= nums[i] <= 3 * 104
//     Each element in the array appears twice except for one element which appears only once.

#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {

    int multiply = 0;

    for(int i = 0; i<nums.size(); ++i) {

        multiply = (multiply ^ nums[i]);
    }

    return multiply;
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

        cout<<singleNumber(arr)<<"\n";
    }

    return 0;
}
// https://leetcode.com/problems/contains-duplicate/

// 217. Contains Duplicate
// Solved
// Easy
// Topics
// Companies

// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.



// Example 1:

// Input: nums = [1,2,3,1]

// Output: true

// Explanation:

// The element 1 occurs at the indices 0 and 3.

// Example 2:

// Input: nums = [1,2,3,4]

// Output: false

// Explanation:

// All elements are distinct.

// Example 3:

// Input: nums = [1,1,1,3,3,4,3,2,4,2]

// Output: true



// Constraints:

//     1 <= nums.length <= 105
//     -109 <= nums[i] <= 109

#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {

    int n = nums.size();

    unordered_map<int, int> numFreq;

    for(int i=0;i<n;++i) {

        numFreq[nums[i]]++;
    }

    for(const auto &value: numFreq) {

        if(value.second >= 2) return true;
    }

    return false;
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

        cout<<containsDuplicate(arr);
    }
    
    return 0;
}
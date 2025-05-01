// https://leetcode.com/problems/running-sum-of-1d-array/description/

// 1480. Running Sum of 1d Array
// Solved
// Easy
// Topics
// Companies
// Hint

// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

// Return the running sum of nums.



// Example 1:

// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

// Example 2:

// Input: nums = [1,1,1,1,1]
// Output: [1,2,3,4,5]
// Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].

// Example 3:

// Input: nums = [3,1,2,10,1]
// Output: [3,4,6,16,17]



// Constraints:

//     1 <= nums.length <= 1000
//     -10^6 <= nums[i] <= 10^6

#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {

    int n = nums.size();

    vector<int> runningSum(n);
    runningSum[0] = nums[0];

    for(int i=1;i < n; ++i) {

        runningSum[i] = runningSum[i-1] + nums[i];
    }

    return runningSum;
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

        vector<int> ans = runningSum(nums);

        for(const auto &val: ans)
        {
            cout<<val<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
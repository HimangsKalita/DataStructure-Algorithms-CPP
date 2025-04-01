// https://leetcode.com/problems/binary-search/description/

// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

// You must write an algorithm with O(log n) runtime complexity.



// Example 1:

// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4
// Explanation: 9 exists in nums and its index is 4

// Example 2:

// Input: nums = [-1,0,3,5,9,12], target = 2
// Output: -1
// Explanation: 2 does not exist in nums so return -1

#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int target) {

    int low = 0;
    int high = arr.size() - 1;
    int mid;

    while(low <= high) {

        mid = low + (high-low)/2;

        if(arr[mid] == target) {

            return mid;
        }else if (arr[mid] > target) {

            high = mid - 1;
        }else if(arr[mid] < target) {

            low = mid + 1;
        }
    }

    return -1;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){
        
        int n, x;
        cin>>n>>x;

        vector<int> arr(n);

        for (int i = 0; i < n;  ++i)
        {
            cin>>arr[i];
        }

        cout<<search(arr, x)<<"\n";
    }

    return 0;
}



// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

// Max Sum Subarray of size K
// Difficulty: EasyAccuracy: 49.6%Submissions: 187K+Points: 2

// Given an array of integers arr[]  and a number k. Return the maximum sum of a subarray of size k.

// Note: A subarray is a contiguous part of any given array.

// Examples:

// Input: arr[] = [100, 200, 300, 400] , k = 2
// Output: 700
// Explanation: arr3  + arr4 = 700, which is maximum.

// Input: arr[] = [100, 200, 300, 400] , k = 4
// Output: 1000
// Explanation: arr1 + arr2 + arr3 + arr4 = 1000, which is maximum.

// Input: arr[] = [100, 200, 300, 400] , k = 1
// Output: 400
// Explanation: arr4 = 400, which is maximum.

// Constraints:
// 1 <= arr.size() <= 106
// 1 <= arr[i]<= 106
// 1 <= k<= arr.size()

#include <bits/stdc++.h>
using namespace std;

int maximumSumSubarray(vector<int>& arr, int k) {

    int n = arr.size();

    int maxSum = 0;

    for(int i=0;i<n-1;++i) {

        arr[i+1] += arr[i];
    }

    int preSubtract = 0;

    for(int i=0; i<=n-k; i += 1) {

        if(i-1>=0) {

            preSubtract = arr[i-1];
        }

        if(arr[i+k-1] - preSubtract >= maxSum) {

            maxSum = arr[i+k-1] - preSubtract;
        }
    }

    return maxSum;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n, k;
        cin>>n>>k;

        vector<int> arr(n);

        for (int i = 0; i < n;  ++i)
        {
            cin>>arr[i];
        }

        cout<<maximumSumSubarray(arr, k)<<"\n";
    }

    return 0;
}
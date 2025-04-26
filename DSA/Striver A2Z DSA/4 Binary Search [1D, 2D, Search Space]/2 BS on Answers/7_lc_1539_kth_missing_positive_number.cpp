// https://leetcode.com/problems/kth-missing-positive-number/description/

// Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

// Return the kth positive integer that is missing from this array.



// Example 1:

// Input: arr = [2,3,4,7,11], k = 5
// Output: 9
// Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.

// Example 2:

// Input: arr = [1,2,3,4], k = 2
// Output: 6
// Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing positive integer is 6.



// Constraints:

//     1 <= arr.length <= 1000
//     1 <= arr[i] <= 1000
//     1 <= k <= 1000
//     arr[i] < arr[j] for 1 <= i < j <= arr.length



// Follow up:

// Could you solve this problem in less than O(n) complexity?

#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {

    int n = arr.size();

    int ans = -1;

    if (arr[0] > k)
    {
        return k;
    }else if (arr[n-1] == n)
    {
        return arr[n-1] + k;
    }else {

        int left = 0, right = n-1;

        while(left <= right){

            int mid = left + (right-left)/2;

            int missing = arr[mid] - mid - 1;

            if (missing < k)
            {
                ans = arr[mid] + (k - missing);
                left = mid + 1;
            }else {

                right = mid - 1;
            }
        }
    }

    return ans;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n, k;
    cin>>n>>k;

    vector<int> arr(n);

    for (int i = 0; i < n;  ++i)
    {
        cin>>arr[i];
    }

    cout<<findKthPositive(arr, k);

    return 0;
}


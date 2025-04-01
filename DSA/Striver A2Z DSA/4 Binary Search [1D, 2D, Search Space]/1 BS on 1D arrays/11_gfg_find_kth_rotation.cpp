// https://www.geeksforgeeks.org/problems/rotation4723/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=rotation

// Given an increasing sorted rotated array arr of distinct integers. The array is right-rotated k times. Find the value of k.
// Let's suppose we have an array arr = [2, 4, 6, 9], so if we rotate it by 2 times so that it will look like this:
// After 1st Rotation : [9, 2, 4, 6]
// After 2nd Rotation : [6, 9, 2, 4]

// Examples:

// Input: arr = [5, 1, 2, 3, 4]
// Output: 1
// Explanation: The given array is 5 1 2 3 4. The original sorted array is 1 2 3 4 5. We can see that the array was rotated 1 times to the right.

// Input: arr = [1, 2, 3, 4, 5]
// Output: 0
// Explanation: The given array is not rotated.

// Expected Time Complexity: O(log(n))
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= n <=105
// 1 <= arri <= 107

#include <bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &arr) {

    int n = arr.size();

    int left = 0, right = n - 1;

    int ans = INT_MAX;
    int index = -1;

    while(left <= right) {

        int mid = left + (right-left)/2;

        if(arr[left] <= arr[mid]) {

            if(arr[left] <= ans) {

                ans = arr[left];
                index = left;
            }

            left = mid + 1;

        }else {

            if(arr[mid] <= ans) {

                ans = arr[mid];
                index = mid;
            }

            right = mid - 1;
        }
    }

    return index;
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

        cout<<findKRotation (arr)<<endl;   
    }

    return 0;
}


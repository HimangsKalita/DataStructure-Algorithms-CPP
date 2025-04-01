// https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=ceil-the-floor

// Given an unsorted array arr[] of integers and an integer x, find the floor and ceiling of x in arr[].

// Floor of x is the largest element which is smaller than or equal to x. Floor of x doesn’t exist if x is smaller than smallest element of arr[].
// Ceil of x is the smallest element which is greater than or equal to x. Ceil of x doesn’t exist if x is greater than greatest element of arr[].

// Return an array of integers denoting the [floor, ceil]. Return -1 for floor or ceiling if the floor or ceiling is not present.

// Examples:

// Input: x = 7 , arr[] = [5, 6, 8, 9, 6, 5, 5, 6]
// Output: 6, 8
// Explanation: Floor of 7 is 6 and ceil of 7 is 8.

// Input: x = 10 , arr[] = [5, 6, 8, 8, 6, 5, 5, 6]
// Output: 8, -1
// Explanation: Floor of 10 is 8 but ceil of 10 is not possible.

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// Constraints :
// 1 ≤ arr.size ≤ 105
// 1 ≤ arr[i], x ≤ 106

#include <bits/stdc++.h>
using namespace std;

vector<int> getFloorAndCeil(int x, vector<int> &arr) {

    int n = arr.size();

    int floorNum = -1, ceilNum = INT_MAX;

    vector<int> ans;

    for(int i=0;i<n;i++) {

        if (arr[i] == x)
        {
            ans.push_back(-1);
            ans.push_back(-1);

            return ans;

        }else {

            if(arr[i] < x && arr[i] >= floorNum) {

                floorNum = arr[i];
            }

            if(arr[i] > x && arr[i] <= ceilNum) {

                ceilNum = arr[i];
            }
        }
    }

    if (ceilNum == INT_MAX)
    {
        ceilNum = -1;
    }

    ans.push_back(floorNum);
    ans.push_back(ceilNum);

    return ans;
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

        vector<int> ans = getFloorAndCeil(x, arr);

        cout<<ans[0]<<", "<<ans[1]<<"\n";
    }

    return 0;
}
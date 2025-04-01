// https://www.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root

// Given a positive integer n, find the square root of n. If n is not a perfect square, then return the floor value.

// Floor value of any number is the greatest Integer which is less than or equal to that number

// Examples:

// Input: n = 4
// Output: 2
// Explanation: Since, 4 is a perfect square, so its square root is 2.

// Input: n = 11
// Output: 3
// Explanation: Since, 11 is not a perfect square, floor of square root of 11 is 3.

// Input: n = 1
// Output: 1

// Constraints:
// 1 ≤ n ≤  3 x 10^4

#include <bits/stdc++.h>
using namespace std;

// Brute force
// Time - O(n)
// Space - O(1)

// int floorSqrt(int n) {

//     int ans;

//     for(int i=1;i<=n;++i){

//         if (i*i <= n)
//         {
//             ans = i;
//         }else {

//             break;
//         }
//     }

//     return ans;
// }

// Binary Search
// Time - O(LogN)
// Space - O(1)

int floorSqrt(int n) {

    int ans;

    int left =1, right = n;

    while(left <= right){
        
        int mid = left + (right - left)/2;

        if (mid * mid <= n)
        {
            ans = mid;
            left = mid + 1;
        }else {

            right = mid - 1;
        }
    }

    return ans;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        cout<<n<<" "<<floorSqrt(n)<<endl;
    }

    return 0;
}


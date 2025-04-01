// https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-nth-root-of-m

// You are given 2 numbers n and m, the task is to find n√m (nth root of m). If the root is not integer then returns -1.

// Examples :

// Input: n = 2, m = 9
// Output: 3
// Explanation: 32 = 9

// Input: n = 3, m = 9
// Output: -1
// Explanation: 3rd root of 9 is not integer.

// Input: n = 1, m = 14
// Output: 14

// Constraints:
// 1 <= n <= 30
// 1 <= m <= 109

#include <bits/stdc++.h>
using namespace std;

// Using brute force
// Time - O(n)
// Space - O(1)

// int nthRoot(int n, int m) {

//     if(n == 1) {

//         return m;
//     }

//     for (int i = 0; i < m; ++i)
//     {
//         int res = 1;

//         for (int j = 0; j < n; ++j)
//         {
//             res *= i;
//         }

//         if (res == m)
//         {
//             return i;
//         }else if (res > m)
//         {
//             break;
//         }
//     }

//     return -1;
// }

// Using Binary Search
// Time - O(NLogM)
// Space - O(1)

int nthRoot(int n, int m) {

    if(n == 1) {

        return m;
    }

    int left = 0, right = m;

    while(left <= right){

        int mid = left + (right - left)/2;

        long long res = 1;

        for (int j = 0; j < n; ++j)
        {
            res *= mid;

            if (res > m)
            {
                break;
            }
        }

        if (res == m)
        {
            return mid;
        }

        if (res > m)
        {
            right = mid - 1;
        }else {

            left = mid + 1;
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

        int n, m;
        cin>>n>>m;

        cout<<nthRoot(n, m)<<endl;    
    }

    return 0;
}


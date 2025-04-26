// https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/chandu-and-his-girlfriend-returns/

// Problem

// In the previous problem Chandu bought some unsorted arrays and sorted them (in non-increasing order). Now, he has many sorted arrays to give to his girlfriend. But, the number of sorted arrays are very large so Chandu decided to merge two sorted arrays into one sorted array. But he is too lazy to do that. So, he asked your help to merge the two sorted arrays into one sorted array (in non-increasing order).

// Input:
// First line contains an integer T, denoting the number of test cases.
// First line of each test case contains two space separated integers N and M, denoting the size of the two sorted arrays.
// Second line of each test case contains N space separated integers, denoting the first sorted array A.
// Third line of each test case contains M space separated integers, denoting the second array B.

// Output:
// For each test case, print (N + M) space separated integer representing the merged array.

// Constraints:
// 1 <= T <= 100
// 1 <= N, M <= 5*104
// 0 <= Ai, Bi <= 109
// Sample Input

// 1
// 4 5
// 9 7 5 3
// 8 6 4 2 0

// Sample Output

// 9 8 7 6 5 4 3 2 0

// Time Limit: 2
// Memory Limit: 256

#include <bits/stdc++.h>
using namespace std;

bool comp(int &a, int &b) {

    return a > b;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    int n,m,x;

    while(t--) {

        cin>>n>>m;

        vector<int> arr;

        for(int i = 0;i<n;++i) {

            cin>>x;
            arr.push_back(x);
        }

        for(int i =0;i<m;++i) {

            cin>>x;
            arr.push_back(x);
        }

        std::sort(arr.begin(), arr.end(), comp);

        for(const auto &value: arr)
        {
            cout<<value<<" ";
        }

        cout<<"\n";
    }
}
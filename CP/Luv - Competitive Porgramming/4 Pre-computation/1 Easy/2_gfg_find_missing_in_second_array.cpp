// https://www.geeksforgeeks.org/problems/in-first-but-second5423/1

// Find missing in second array
// Difficulty: EasyAccuracy: 35.22%Submissions: 101K+Points: 2Average Time: 20m

// Given two integer arrays a and b, the task is to find the numbers which are present in the first array a, but not present in the second array b.

// Note: Numbers to be returned should in order as they appear in array a.

// Examples :

// Input: a[] = [1, 2, 3, 4, 5, 10], b[] = [2, 3, 1, 0, 5]
// Output: [4, 10]
// Explanation: 4 and 10 are present in first array, but not in second array.

// Input: a[] = [4, 3, 5, 9, 11], b[] = [4, 9, 3, 11, 10]
// Output: [5]  
// Explanation: Second array does not contain element 5.

// Input: a[] = [9], b[] = [7, 9, 4, 9, 9, 9]
// Output: []  

// Constraints:
// 1 <= a.size(), b.size() <= 105
// 1 <= a[i] <= 105
// 1 <= b[i] <= 105

#include <bits/stdc++.h>
using namespace std;

// Brute force
// Time - O(N*N)
// Space - O(N);

// vector<int> findMissing(vector<int>& a, vector<int>& b) {

//     int n = a.size();

//     int m = b.size();

//     vector<int> ans;

//     for (int i = 0; i < n; ++i)
//     {
//         bool found = false;

//         for (int j = 0; j < m; ++j)
//         {
//             if (a[i] == b[i])
//             {
//                 found = true;
//             }
//         }

//         if (!found)
//         {
//             ans.push_back(a[i]);
//         }
//     }

//     return ans;
// }

// Brute force
// Time - O(N)
// Space - O(M);
vector<int> findMissing(vector<int>& a, vector<int>& b) {

    int n = a.size();

    int m = b.size();

    unordered_set<int> eleFreq;

    for (int i = 0; i < m; ++i)
    {
        eleFreq.insert(b[i]);
    }

    vector<int> ans;

    for (int i = 0; i < n; ++i)
    {
        if (eleFreq.find(a[i]) == eleFreq.end())
        {
            ans.push_back(a[i]);
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

        int a;
        cin>>a;

        vector<int> arrA(a);

        for (int i = 0; i < a;  ++i)
        {
            cin>>arrA[i];
        }

        int b;
        cin>>b;

        vector<int> arrB(b);

        for (int i = 0; i < b;  ++i)
        {
            cin>>arrB[i];
        }

        vector<int> ans = findMissing(arrA, arrB);

        for(const auto &value: ans)
        {
            cout<<value<<" ";
        }

        cout<<"\n";
    }

    return 0;
}
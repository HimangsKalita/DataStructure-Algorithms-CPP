// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/pair-sums/

// Pair Sums
// 46971
// 81%
// 20
// ★★★★★

// 4
// 107 votes
// Easy
// Share
// Details
// Submissions
// Discussion
// Similar Problems
// Editorial
// Problem

// You have been given an integer array A and a number K. Now, you need to find out whether any two different elements of the array A sum to the number K. Two elements are considered to be different if they lie at different positions in the array. If there exists such a pair of numbers, print "YES" (without quotes), else print "NO" without quotes.

// Input Format:

// The first line consists of two integers N, denoting the size of array A and K. The next line consists of N space separated integers denoting the elements of the array A.

// Output Format:

// Print the required answer on a single line.

// Constraints:

// Sample Input

// 5 9
// 1 2 3 4 5

// Sample Output

// YES

// Time Limit: 1
// Memory Limit: 256
// Source Limit:
// Explanation

// Here,
// . So, the answer is YES.

#include <bits/stdc++.h>
using namespace std;

bool isPairSum(vector<int> &arr, int k) {

    int n = arr.size();

    unordered_set<int> eleFreq;

    for (int i = 0; i < n; ++i)
    {
        int missingEle = k - arr[i];

        if (eleFreq.find(missingEle) != eleFreq.end())
        {
            return true;
        }

        eleFreq.insert(arr[i]);
    }

    return false;
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

        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }

        if (isPairSum(arr, k))
        {
            cout<<"YES";
        }else {

            cout<<"NO";
        }
    }

    return 0;
}
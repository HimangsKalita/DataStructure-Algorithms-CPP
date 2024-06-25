// https://www.hackerearth.com/problem/algorithm/maximum-fruits-4/

// Problem
// You have given N plates each plate contains some number of fruits. You will be given Q queries of type: add X number of fruits in each plate from L to R.

// Input:

// First line of input contains N, number of plates.

// Next line contains N integers, number of fruits in each plate.

// Third line will contain Q, number of queries.

// Next Q lines follow queries of any of the following type: X L R.

// Output:

// After completing all the queries, print the maximum number of fruits among all the plates.

// Constraints:

// 1<=N<=10^5;

// 1<=Q<=10^5;

// 0<=L<=R<N;

// 1<=X<=100;

// Sample Input
// 6
// 3 2 5 6 1 4
// 2
// 10 2 4
// 9 1 5
// Sample Output
// 25
// Time Limit: 1
// Memory Limit: 256
// Source Limit:
// Explanation
// After completing all the queries the plate array will become 3 11 24 25 20 13. Hence, the maximum number of fruits among all the plates will be 25.

#include <bits/stdc++.h>
using namespace std;
#define ll int long long
#define nl "\n"
#define fo(i,n) for(int i=0;i<n;i++)
const int N = 1e5+10;
int A[N];
int prefSum[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    
    for (int i = 1; i <= n; ++i)
    {
        cin>>A[i];
    }
    
    int q;
    cin>>q;

    while (q--)
    {
        int x,l,r;
        cin>>x>>l>>r;

        l++;r++;

        prefSum[l] += x;
        prefSum[r+1] -= x;
    }

    for (int i = 1; i <= n; ++i)
    {
        prefSum[i] += prefSum[i-1];
        A[i] += prefSum[i];
    }

    cout<<*max_element(A+1,A+n+1);
    
    return 0;
}
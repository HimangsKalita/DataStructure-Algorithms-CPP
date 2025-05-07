// Given 2D array of N*N integers. Given Q queries and in each query given a, b, c and d, print sum of square represented by (a,b) as top left point and (c, d) as top bottom right point

// Constraints
// 1<=N<=10^3
// 1<=arr[i][j]<=10^9
// 1<=Q<=10^5
// 1<=a,b,c,d<=N

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    vector<vector<int>> arr(n+1, vector<int> (n+1));

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n;  ++j)
        {
            cin>>arr[i][j];
            arr[i][j] = arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1] + arr[i][j];
        }
    }

    int t;
    cin>>t;

    while(t--){

        int a, b, c, d;
        cin>>a>>b>>c>>d;

        long long sum = arr[c][d] - arr[a-1][d] - arr[c][b-1] + arr[a-1][b-1];

        cout<<sum<<"\n";
    }

    return 0;
}
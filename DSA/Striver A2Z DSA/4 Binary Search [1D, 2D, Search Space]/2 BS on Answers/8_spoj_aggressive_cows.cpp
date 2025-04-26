// https://www.spoj.com/problems/AGGRCOW/



// Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1 ... xN (0 <= xi <= 1,000,000,000).

// His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?
// Input

// t – the number of test cases, then t test cases follows.
// * Line 1: Two space-separated integers: N and C
// * Lines 2..N+1: Line i+1 contains an integer stall location, xi
// Output

// For each test case output one integer: the largest minimum distance.
// Example

// Input:

// 1
// 5 3
// 1
// 2
// 8
// 4
// 9

// Output:

// 3

// Output details:

// FJ can put his 3 cows in the stalls at positions 1, 4 and 8,
// resulting in a minimum distance of 3.

#include <bits/stdc++.h>
using namespace std;

int getMinDistance(vector<int> &stalls, int c, int &n, int &mid) {

    int count = 1, comparePosition = stalls[0];

    for (int i = 1; i < n; ++i)
    {
        if((stalls[i] - comparePosition) >= mid) {

            count++;
            comparePosition = stalls[i];

            if (count == c)
            {
                return true;
            }
        }
    }

    return count == c;
}

int getMaxDistance(vector<int> &stalls, int &c) {

    sort(stalls.begin(), stalls.end());

    int n = stalls.size();

    int left = 1, right = stalls[n-1] - stalls[0];

    int ans = -1;

    while(left <= right) {

        int mid = left + (right - left)/2;

        if (getMinDistance(stalls, c, n, mid))
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

        int b, c;
        cin>>b>>c;

        vector<int> stalls(b);

        for (int i = 0; i < b;  ++i)
        {
            cin>>stalls[i];
        }

        cout<<getMaxDistance(stalls, c)<<endl;
    }

    return 0;
}


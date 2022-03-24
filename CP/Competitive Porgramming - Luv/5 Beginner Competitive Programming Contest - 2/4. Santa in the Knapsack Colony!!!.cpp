// https://www.hackerearth.com/problem/algorithm/santa-and-gifts-2/

// Problem
// On the eve of Christmas, Santa wants to distribute N gifts in Knapsack Colony. But in the Knapsack Colony, houses are not numbered sequentially. As Santa is old, he could not remember whether he has already delivered the gift to a particular House Number, Hi (1<= i <=N) or not. Thus, He may deliver one or more than one gifts in some houses and unfortunately none in some :(   

// After completing the delivery of all gifts, Santa is wondering who may receive more than K gifts. As Santa is very tired now, Help him find the number of houses which has received more than K gifts.

// INPUT
// First-line contains two integers N(representing the number of gifts) and K.

// The second line contains N-separated integers, H1, H2,........., HN, representing the house-number where Santa is distributing gifts.

// OUTPUT
// Output the number of houses which has received more than K gifts.

// CONSTRAINTS
// 1 <= N <= 105

// 1 <= K <= 105

// 1<= Hi <= 107

// Sample Input
// 10 2
// 23 5 1 23 8 1 1 23 86 75
// Sample Output
// 2

#include <bits/stdc++.h>
using namespace std;
#define ll int long long
#define nl "\n"
#define fo(i,n) for(int i=0;i<n;i++)
const int N = 1e6+10;
int hsh[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    for (int i = 0; i <n; ++i)
    {
        int val;
        cin>>val;
        hsh[val]++;
    }

    int count = 0;

    for (int i = 0; i < N; i++)
    {
        if (hsh[i] > k)
        {   
            count++;
        }
    }

    cout<<count;
    
    return 0;
}
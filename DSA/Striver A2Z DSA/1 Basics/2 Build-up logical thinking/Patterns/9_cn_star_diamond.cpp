// https://www.naukri.com/code360/problems/star-diamond_6573686?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM

//  Star Diamond
// Easy
// 40/40
// Contributed by
// 138 upvotes
// Problem statement

// Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Diamond.
// Example:

// Input: ‘N’ = 3

// Output: 

//   *
//  ***
// *****
// *****
//  ***
//   *

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= N <= 20
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

//   *
//  ***
// *****
// *****
//  ***
//   *    

// Sample Input 2 :

// 1

// Sample Output 2 :

// *
// *



#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;

    for (int i = 0; i < 2*n; ++i)
    {

        if (i<n)
        {
            for (int j = 0; j < n-i-1; ++j)
            {
                cout<<" ";
            }

            for (int j = 0; j < (2*i) + 1; ++j)
            {
                cout<<"*";
            }
        }else {

            for (int j = n; j < i; ++j)
            {
                cout<<" ";
            }

            for (int j = 0; j < 2*(2*n-1-i) + 1; ++j)
            {
                cout<<"*";
            }
        }

        cout<<endl;
    }

    return 0;
}


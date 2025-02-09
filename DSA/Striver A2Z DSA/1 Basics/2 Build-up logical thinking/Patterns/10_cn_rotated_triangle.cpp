// https://www.naukri.com/code360/problems/rotated-triangle_6573688?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM

//  Rotated Triangle
// Easy
// 40/40
// Contributed by
// 114 upvotes
// Problem statement

// Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Rotated Triangle.
// Example:

// Input: ‘N’ = 3

// Output: 

// *
// **
// ***
// **
// *

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= N <= 20
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

// *
// **
// ***
// **
// *

// Sample Input 2 :

// 1

// Sample Output 2 :

// *



#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;

    if (n == 1)
    {
        cout<<"*";
    }else {

        for (int i = 0; i < 2*n-1; ++i)
        {
            int stars =  (i < n) ? i+1 : 2*n-i-1;

            for (int j = 0; j < stars; ++j)
            {
                cout<<"*";
            }

            cout<<"\n";
        }
    }

    return 0;
}
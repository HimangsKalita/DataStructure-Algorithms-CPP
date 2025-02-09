// https://www.naukri.com/code360/problems/alpha-ramp_6581888?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM

// Alpha-Ramp
// Easy
// 40/40
// Average time to solve is 5m
// Contributed by
// 39 upvotes
// Problem statement

// Sam is curious about Alpha-Ramp, so he decided to create Alpha-Ramp of different sizes.

// An Alpha-Ramp is represented by a triangle, where alphabets are filled from the top in order.

// For every value of ‘N’, help sam to return the corresponding Alpha-Ramp.
// Example:

// Input: ‘N’ = 3

// Output: 
// A
// B B
// C C C

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= N <= 25
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

// A
// B B
// C C C

// Sample Input 2 :

// 1

// Sample Output 2 :

// A

// Sample Input 3 :

// 4

// Sample Output 3 :

// A
// B B
// C C C
// D D D D

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;

    char ch = 'A';

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout<<ch<<" ";
        }

        ch++;

        cout<<"\n";
    }

    return 0;
}


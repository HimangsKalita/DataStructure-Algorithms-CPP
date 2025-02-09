// https://www.naukri.com/code360/problems/symmetric-void_6581919?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

// ymmetric Void
// Easy
// 40/40
// Average time to solve is 15m
// Contributed by
// 120 upvotes
// Problem statement

// Sam is curious about symmetric patterns, so he decided to create one.

// For every value of ‘N’, return the symmetry as shown in the example.
// Example:

// Input: ‘N’ = 3

// Output: 
// * * * * * * 
// * *     * * 
// *         * 
// *         * 
// * *     * * 
// * * * * * * 

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= N <= 25
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

// * * * * * * 
// * *     * * 
// *         * 
// *         * 
// * *     * * 
// * * * * * * 

// Sample Input 2 :

// 1

// Sample Output 2 :

// * * 
// * * 



#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;

    if (n==1)
    {
        cout<<"*";
    }else {

        for(int i=0;i<n;i++) {

            for(int j=0;j<n-i;j++) {

                cout<<"* ";
            }

            for(int j=0;j<2*i;j++) {

                cout<<"  ";
            }

            for(int j=0;j<n-i;j++) {

                cout<<"* ";
            }

            cout<<"\n";
        }

        for (int i=n;i<2*n;i++) {

            for(int j=0;j<(i-n)+1;j++) {

                cout<<"* ";
            }

            for(int j=0;j<2*((2*n)-i-1);j++) {

                cout<<"  ";
            }

            for(int j=0;j<(i-n)+1;j++) {

                cout<<"* ";
            }

            cout<<"\n";
        }
    }

    return 0;
}


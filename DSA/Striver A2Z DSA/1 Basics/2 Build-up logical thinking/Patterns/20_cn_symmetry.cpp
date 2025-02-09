// https://www.naukri.com/code360/problems/symmetry_6581914?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

//  Symmetry
// Easy
// 40/40
// Average time to solve is 10m
// Contributed by
// 56 upvotes
// Problem statement

// Sam is curious about symmetric patterns, so he decided to create one.

// For every value of ‘N’, return the symmetry as shown in the example.
// Example:

// Input: ‘N’ = 3

// Output: 
// *         *
// * *     * *
// * * * * * *
// * *     * *
// *         *

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= N <= 25
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

// *         *
// * *     * *
// * * * * * *
// * *     * *
// *         *

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

    if (n==1)
    {
        cout<<"*";
    }else {

        int spaces = (2*n)-2;

        for(int row=0;row<n;row++) {



            for(int col=0;col<=row;col++){

                cout<<"* ";
            }

            for(int space=0;space<spaces;space++) {

                cout<<"  ";
            }

            for(int col=0;col<=row;col++) {

                cout<<"* ";
            }

            spaces -= 2;

            cout<<"\n";
        }

        spaces = 2;

        for(int row=n;row<2*n-1;row++) {



            for(int col=n-1;col>row-n;col--) {

                cout<<"* ";
            }

            for(int space=0;space<spaces;space++) {

                cout<<"  ";
            }

            for(int col=n-1;col>row-n;col--) {

                cout<<"* ";
            }

            spaces = spaces + 2;

            cout<<"\n";
        }

        cout<<"\n";

    }

    return 0;
}



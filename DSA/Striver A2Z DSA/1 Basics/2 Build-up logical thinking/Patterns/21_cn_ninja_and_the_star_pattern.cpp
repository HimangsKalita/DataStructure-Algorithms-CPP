// https://www.naukri.com/code360/problems/ninja-and-the-star-pattern-i_6581920?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

//  Ninja And The Star Pattern I
// Easy
// 40/40
// Average time to solve is 13m
// Contributed by
// 68 upvotes
// Problem statement

// Ninja has been given a task to print the required star pattern and he asked your help for the same.

// You must return an ‘N’*’N’ matrix corresponding to the given star pattern.
// Example:

// Input: ‘N’ = 4

// Output: 

// ****
// *  *
// *  *
// ****

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= N <= 10^2
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

// ***
// * *
// ***

// Sample Input 2 :

// 5

// Sample Output 2 :

// *****
// *   *
// *   *
// *   *
// *****

// Sample Input 3 :

// 8

// Sample Output 3 :

// ********
// *      *
// *      *
// *      *
// *      *
// *      *
// *      *
// ********

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;

    for(int i=0;i<n;i++) {

        int spaces = n-2;

        int stars = 1;

        if(i==0 || i==n-1) {

            spaces = 0;
            stars = n/2;
            if(n%2==1) {

                cout<<"*";
            }
        }

        for(int star=0;star<stars;star++) {

            cout<<"*";
        }

        for(int space=0;space<spaces;space++) {

            cout<<" ";
        }

        for(int star=0;star<stars;star++) {

            cout<<"*";
        }

        cout<<"\n";

    }

    return 0;
}


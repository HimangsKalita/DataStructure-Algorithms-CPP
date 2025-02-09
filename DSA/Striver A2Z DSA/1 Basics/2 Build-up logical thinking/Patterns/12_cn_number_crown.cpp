// https://www.naukri.com/code360/problems/number-crown_6581894?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM

//  Number Crown
// Easy
// 40/40
// Contributed by
// 152 upvotes
// Problem statement

// Aryan and his friends are very fond of the pattern. They want to make the Reverse N-Number Crown for a given integer' N'.

// Given 'N', print the corresponding pattern.
// Example:

// Input: ‘N’ = 3

// Output: 

// 1         1
// 1 2     2 1
// 1 2 3 3 2 1

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= N <= 20
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

// 1         1
// 1 2     2 1
// 1 2 3 3 2 1

// Sample Input 2 :

// 4

// Sample Output 2 :

// 1             1
// 1 2         2 1
// 1 2 3     3 2 1
// 1 2 3 4 4 3 2 1

// Sample Input 3 :

// 7

// Sample Output 3 :

// 1                         1
// 1 2                     2 1
// 1 2 3                 3 2 1
// 1 2 3 4             4 3 2 1
// 1 2 3 4 5         5 4 3 2 1
// 1 2 3 4 5 6     6 5 4 3 2 1
// 1 2 3 4 5 6 7 7 6 5 4 3 2 1  

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;

    if (n == 1)
    {
        cout<<"1";
        return 0;
    }else {


        for(int i=1;i<=n;i++) {

            for(int j=0;j<i;j++) {

                cout<<j+1<<" ";
            }

            for(int j=i;j<2*(n-1);j++) {

                cout<<"  ";
            }

            for(int j=i;j>0;j--) {

                cout<<j<<" ";
            }

            cout<<"\n";
        }
    }

    return 0;
}
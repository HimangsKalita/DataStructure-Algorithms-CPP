// https://www.naukri.com/code360/problems/alpha-hill_6581921?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

//  Alpha Hill
// Easy
// 0/40
// Average time to solve is 15m
// Contributed by
// 128 upvotes
// Problem statement

// Sam is curious about Alpha-Hills, so he decided to create Alpha-Hills of different sizes.

// An Alpha-hill is represented by a triangle, where alphabets are filled in palindromic order.

// For every value of ‘N’, help sam to return the corresponding Alpha-Hill.
// Example:

// Input: ‘N’ = 3

// Output: 
//     A
//   A B A
// A B C B A

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= N <= 25
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

//     A
//   A B A
// A B C B A

// Sample Input 2 :

// 1

// Sample Output 2 :

// A

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;

    if (n == 1)
    {
        cout<<"A";  
    }else
    {
        
        for (int i = 0; i < n; ++i)
        {

            char ch = 'A' + n;

            for (int j = 0; j <= i; ++j)
            {
                ch--;
                cout<<ch;
            }

            cout<<"\n";
        }
    }

    return 0;
}
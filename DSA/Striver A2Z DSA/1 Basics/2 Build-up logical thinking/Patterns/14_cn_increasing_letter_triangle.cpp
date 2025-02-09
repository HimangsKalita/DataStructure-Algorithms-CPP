// https://www.naukri.com/code360/problems/increasing-letter-triangle_6581897?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

//  Increasing Letter Triangle
// Easy
// 0/40
// Contributed by
// 46 upvotes
// Problem statement

// Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Letter Triangle.
// Example:

// Input: ‘N’ = 3

// Output: 

// A
// A B
// A B C

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= N <= 20
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

// A
// A B
// A B C

// Sample Input 2 :

// 4

// Sample Output 2 :

// A
// A B
// A B C 
// A B C D

// Sample Input 3 :

// 7

// Sample Output 3 :

// A
// A B
// A B C 
// A B C D
// A B C D E
// A B C D E F
// A B C D E F G

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;


    for (int i = 1; i <= n; ++i)
    {

        char ch = 65;

        for (int j = 0; j < i; ++j)
        {
            cout<<ch++<<" ";
        }

        cout<<"\n";
    }

    return 0;
}


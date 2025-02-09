// https://www.naukri.com/code360/problems/reverse-letter-triangle_6581906?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

//  Reverse Letter Triangle
// Easy
// 0/40
// Contributed by
// 50 upvotes
// Problem statement

// Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Reverse Letter Triangle.

// You must print a matrix corresponding to the given Reverse Letter Triangle.
// Example:

// Input: ‘N’ = 3

// Output: 

// A B C
// A B
// A

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= N <= 20
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

// A B C
// A B
// A

// Sample Input 2 :

// 4

// Sample Output 2 :

// A B C D
// A B C
// A B
// A

// Sample Input 3 :

// 7

// Sample Output 3 :

// A B C D E F G 
// A B C D E F 
// A B C D E 
// A B C D 
// A B C 
// A B 
// A 

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;

    for (int i = 0; i < n; ++i)
    {
        char ch = 'A';

        for (int j = 0; j < n-i; ++j)
        {
            cout<<ch++<<" ";
        }

        cout<<"\n";
    }

    return 0;
}


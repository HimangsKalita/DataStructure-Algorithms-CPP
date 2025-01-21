// https://www.naukri.com/code360/problems/reverse-number-triangle_6581889?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

//  Problem statement

// Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the Reverse N-Number Triangle.
// Example:

// Input: ‘N’ = 3

// Output: 

// 1 2 3
// 1 2
// 1

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= N <= 20
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

// 1 2 3
// 1 2
// 1

// Sample Input 2 :

// 4

// Sample Output 2 :

// 1 2 3 4
// 1 2 3
// 1 2
// 1

// Sample Input 3 :

// 7

// Sample Output 3 :

// 1 2 3 4 5 6 7
// 1 2 3 4 5 6
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1

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

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout<<j<<" ";
            }

            cout<<"\n";
        }
    }

    return 0;
}
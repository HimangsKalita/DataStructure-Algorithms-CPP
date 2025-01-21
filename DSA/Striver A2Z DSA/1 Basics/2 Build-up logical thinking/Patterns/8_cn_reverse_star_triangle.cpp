// https://www.naukri.com/code360/problems/reverse-star-triangle_6573685?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

//  Problem statement

// Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the Reverse N-Star Triangle.
// Example:

// Input: ‘N’ = 3

// Output: 

// *****
//  ***
//   *

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= N <= 20
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

// *****
//  ***
//   *

// Explanation Of Sample Input 1 :

// The first row contains five stars.
// The second row contains one space, followed by three stars.
// The third row contains two spaces, followed by a star.

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

        for (int row = 0; row < n; ++row)
        {
            for (int space = 0; space < row; ++space)
            {
                cout<<" ";
            }

            for (int col = 0; col < 2 * (n-1-row) + 1; ++col)
            {
                cout<<"*";
            }

            cout<<"\n";
        }
    }

    return 0;
}
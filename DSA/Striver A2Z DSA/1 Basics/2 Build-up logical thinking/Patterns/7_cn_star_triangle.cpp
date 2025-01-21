// https://www.naukri.com/code360/problems/star-triangle_6573671?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

//  Problem statement

// Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Triangle.
// Example:

// Input: ‘N’ = 3

// Output: 

//   *
//  ***
// *****

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= N <= 20
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

//   *
//  ***
// *****

// Explanation Of Sample Input 1 :

// The first row contains two spaces, followed by a star.
// The second row contains one space, followed by three stars.
// The third row contains five stars.

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

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j < n+i; ++j)
            {
                if (j <= n-i)
                {
                    cout<<" ";
                }else {
                    cout<<"*";
                }
            }
        }
    }

    return 0;
}


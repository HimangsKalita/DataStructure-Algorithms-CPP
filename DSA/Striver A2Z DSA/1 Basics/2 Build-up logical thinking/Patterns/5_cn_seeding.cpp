// https://www.naukri.com/code360/problems/seeding_6581892?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

//  Problem statement

// Sam is planting trees on the upper half region (separated by the left diagonal) of the square shared field.

// For every value of ‘N’, print the field if the trees are represented by ‘*’.
// Example:

// Input: ‘N’ = 3

// Output: 
// * * *
// * *
// *

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= T <= 10
// 1  <= N <= 25
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

// * * *
// * *
// *

// Sample Input 2 :

// 1

// Sample Output 2 :

// *

// Sample Input 3 :

// 4

// Sample Output 3 :

// * * * *
// * * *
// * *
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
        return 0;
    }else {

        for (int i = 0; i < n; ++i)
        {
            for (int j = i; j < n; ++j)
            {
                cout<<"* ";
            }

            cout<<"\n";
        }
    }

    return 0;
}


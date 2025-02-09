// https://www.naukri.com/code360/problems/binary-number-triangle_6581890?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

//  Binary Number Triangle
// Easy
// 0/40
// Contributed by
// 159 upvotes
// Problem statement

// Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the N-Binary Number Triangle.

// You are required to print the pattern as shown in the examples below.
// Example:

// Input: ‘N’ = 3

// Output: 

// 1
// 0 1
// 1 0 1

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= N <= 20
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

// 1
// 0 1
// 1 0 1

// Sample Input 2 :

// 4

// Sample Output 2 :

// 1
// 0 1
// 1 0 1
// 0 1 0 1

// Sample Input 3 :

// 6

// Sample Output 3 :

// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
// 0 1 0 1 0 1 

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

        bool binary = true;

        for (int i = 0; i < n; ++i)
        {   
            bool binaryInside = binary;

            for (int j = 0; j <= i; ++j)
            {


                if (binaryInside)
                {
                    cout<<"1 ";
                    binaryInside = !binaryInside;
                }else {

                    cout<<"0 ";
                    binaryInside = !binaryInside;
                }
            }

            cout<<"\n";

            binary = !binary;
        }
    }

    return 0;
}


// https://www.naukri.com/code360/problems/ninja-and-the-number-pattern-i_6581959?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM

//  Ninja And The Number Pattern
// Easy
// 0/40
// Average time to solve is 16m
// Contributed by
// 292 upvotes
// Problem statement

// Ninja has been given a task to print the required pattern and he asked for your help with the same.

// You must print a matrix corresponding to the given number pattern.
// Example:

// Input: ‘N’ = 4

// Output: 

// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= N <= 10^2
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

// 33333
// 32223
// 32123
// 32223
// 33333

// Sample Input 2 :

// 5

// Sample Output 2 :

// 555555555
// 544444445
// 543333345
// 543222325
// 543212345
// 543222325
// 543333345
// 544444445
// 555555555

// Sample Input 3 :

// 4

// Sample Output 3 :

// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;

    for (int i = 0; i < (2*n)-1; ++i)
    {
        for (int j = 0; j < (2*n)-1; ++j)
        {   
            int left = j;
            int top = i;
            int right = (2*n-1)-1-j;
            int bottom = (2*n-1)-1-i;

            int minNum = min(min(left,top), min(right, bottom));

            cout<<n-minNum;
        }

        cout<<"\n";
    }

    return 0;
}



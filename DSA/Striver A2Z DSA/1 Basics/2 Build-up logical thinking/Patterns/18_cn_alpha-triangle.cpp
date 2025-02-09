// https://www.naukri.com/code360/problems/alpha-triangle_6581429?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=SUBMISSION

//  Alpha-Triangle
// Easy
// 40/40
// Average time to solve is 5m
// Contributed by
// 87 upvotes
// Problem statement

// Sam is researching on Alpha-Triangles. So, he needs to create them for different integers ‘N’.

// An Alpha-Triangle is represented by the triangular pattern of alphabets in reverse order.

// For every value of ‘N’, help sam to print the corresponding Alpha-Triangle.
// Example:

// Input: ‘N’ = 3

// Output: 
// C
// C B 
// C B A

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1  <= N <= 25
// Time Limit: 1 sec

// Sample Input 1:

// 3

// Sample Output 1:

// C
// C B 
// C B A

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
        
        for(int i=0;i<n;i++) {

            char ch = 'A' + n - 1;

            for(int j=0;j<=i;j++) {

                cout<<ch--<<" ";
            }

            cout<<"\n";
        }
    }

    return 0;
}
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/friends-relationship-1/

// Problem

// Jack is your friend and Sophia is his girlfriend. But due to some unknown reason ( unknown for us, they know it) Sophia started hating to Jack. Now, Jack is in big trouble but he has a solution, He knows that if he will gift T patterns of a particular type ( For pattern observation see the sample test cases) then Sophia will start loving again to Jack. But Jack is depressed now and need your help to gift her that type patterns of '*' and '#' of N lines. So, it's your responsibility to save your friend's relationship.

// Constraints :

// 1 ≤  T ≤ 100

// 1 ≤  N ≤ 30

// Input :

// First Line contains T i.e. number of test case.
// Each of the next T lines contain an integer N.

// Output:

// For each test case print the pattern of N lines then after a blank line.
// Sample Input

// 3
// 9
// 2
// 5

// Sample Output

// *################*
// **##############**
// ***############***
// ****##########****
// *****########*****
// ******######******
// *******####*******
// ********##********
// ******************

// *##*
// ****

// *########*
// **######**
// ***####***
// ****##****
// **********


#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int t;
    cin>>t;

    if (1>t || t>100)
    {
        return 0;
    }

    while(t--){

        int n;
        cin>>n;

        if (1 > n || n > 30)
        {
            return 0;
        }

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 0, k=n-i; j < 2*n; ++j, ++k)
            {
                if (i > j || j >= 2*n-i)
                {
                    cout<<"*";
                }else
                {
                    cout<<"#";
                }
                
            }

            cout<<endl;
        }

        cout<<endl;

    }

    return 0;
}
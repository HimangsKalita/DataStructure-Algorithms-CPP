//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/roy-and-symmetric-logos-1/

// Roy likes Symmetric Logos.

// How to check whether a logo is symmetric?
// Align the center of logo with the origin of Cartesian plane. Now if the colored pixels of the logo are symmetric about both X-axis and Y-axis, then the logo is symmetric.

// You are given a binary matrix of size N x N which represents the pixels of a logo.
// 1 indicates that the pixel is colored and 0 indicates no color.

// For instance: Take a 5x5 matrix as follows:

// 01110
// 01010
// 10001
// 01010
// 01110

// Input:
// First line contains T - number of test cases.
// T test cases follow.
// First line of each test case contains the N - size of matrix.
// Next N lines contains binary strings of length N.

// Output:
// Print YES or NO in a new line for each test case

// Constraints:
// 1 ≤ T ≤ 10
// 2 ≤ N ≤ 32

// Note: There will always be atleast 1 colored pixel in input data.

// Sample Input
// 5
// 2
// 11
// 11
// 4
// 0101
// 0110
// 0110
// 0101
// 4
// 1001
// 0000
// 0000
// 1001
// 5
// 01110
// 01010
// 10001
// 01010
// 01110
// 5
// 00100
// 01010
// 10001
// 01010
// 01110

// Sample Output
// YES
// NO
// YES
// YES
// NO

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        bool flag1 = true,flag2 = true;

        string s[n];

        for (int i = 0; i < n; i++)
        {
            cin>>s[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n/2; j++)
            {
                if (s[i][j] != s[i][n-j-1])
                {
                    flag1 = false;
                    break;
                }
                
            }
            
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n/2; j++)
            {
                if (s[j][i] != s[n-j-1][i])
                {
                    flag1 = false;
                    break;
                }
                
            }
            
        }

        if (flag1 == true && flag2 == true)
        {
            cout<<"YES"<<"\n";
        }else
        {
            cout<<"NO"<<"\n";
        }
        
    }

    return 0;
}
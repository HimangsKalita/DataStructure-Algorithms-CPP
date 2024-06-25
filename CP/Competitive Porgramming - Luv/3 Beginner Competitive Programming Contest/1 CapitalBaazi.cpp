// https://www.hackerearth.com/problem/algorithm/capitalbaazi/

// Cheems doesn't like extra content so coming straight to the point. Given the input of one line, having words separated by a single space, print each word of the input, each in a new line.
// Also, change all the alphabets to uppercase along with doing this.

// Input:-
// Given in one line, all letters are lowercase only, separated by a single space.

// Characters used in input are from 'a' to 'z' only ( 26 in total ) , both included.

// Length of input   

// Output:-
// Output each word with characters in uppercase.

// Note:- A testcase contains only one word as the input to get partial marks. Also, the ideal solution has been provided, you can test any of your legal input to get its answer.

// Sample Input

// subscribe to the luv channel

// Sample Output

// SUBSCRIBE
// TO
// THE
// LUV
// CHANNEL

#include <bits/stdc++.h>
using namespace std;
#define ll int long long
#define nl "\n"
#define fo(i,n) for(int i=0;i<n;i++)
const int N = 1e7;
// int A[N];
// template<typename T, std::size_t N, std::size_t M>
// void increment_2D(T (&a)[N][M])
// {
//     for(std::size_t n = 0; n < N; ++n)
//         for(std::size_t m = 0; m < M; ++m)
//             ++a[n][m];
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin,s);

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] != ' ')
        {
            cout<<(char )(s[i] - 32);
        }
        else if(s[i] == ' ')
        {
            cout<<nl;
        } 
    }
    
    
    return 0;
}
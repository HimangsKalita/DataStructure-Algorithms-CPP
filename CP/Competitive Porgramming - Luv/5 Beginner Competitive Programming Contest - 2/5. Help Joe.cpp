// https://www.hackerearth.com/problem/algorithm/help-joe/

// Problem
// Joe is not good with strings, so you volunteer for his help in his task with strings.

// Given a string(consisting of small case alphabets only), we need to find the length of largest possible palindrome for all queries , where each query contains an integer N , and the next line of the query includes N space seperated lowercase alphabets.You must keep the following things in mind:

// 1. For each query, you can use only the characters mentioned in the query to form the palindrome string.

// 2.Palindromic string can be produced using the alphabets of the input string in any order.

 

// INPUT FORMAT -

// First line contains the string.

// The next line takes as input an integer q(denoting the number of queries).

// For each query -

// The first line contains an integer N denothing number of alphabets.

// Next line consist of N space seperated alphabets(alphabets maybe repeated but yet you need to consider them once only).

 

// OUTPUT FORMAT-

// For each query, print the maximum size of palindrome possible only using the alphabets given in the query.

// CONSTRAINS-

// 1≤|S|≤10000

// 1≤q≤10000

// 1≤N≤26


// For 40 points -

// 1≤|S|≤10000

// 1≤q≤10

// 1≤N≤26


// For 60 points -

// Original Constraints

// Sample Input
// abccddeecab
// 2
// 2
// a b 
// 2
// a c
// Sample Output
// 4
// 5


#include <bits/stdc++.h>
using namespace std;
#define ll int long long
#define nl "\n"
#define fo(i,n) for(int i=0;i<n;i++)
const int N = 1e5+10;
int hsh[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    for (int i = 0; i < s.size(); ++i)
    {
        hsh[s[i] - 'a']++;
    }
    

    int q;
    cin>>q;

    while (q--)
    {
        int n;
        cin>>n;

        int arr[27] = { 0 };

        for (int i = 0; i < n; ++i)
        {
            char c;
            cin>>c;

            arr[c - 'a'] = 1;
        }

        int maxLength = 0,isOddPresent = false;
        
        for (int i = 0; i < 27; i++)
        {   
            if (arr[i] == 0) continue;

            if (hsh[i] % 2 == 0 )
            {
                maxLength += hsh[i];
            }else
            {
                maxLength += hsh[i] - 1;
                isOddPresent = true;
            }
            
        }

        if (isOddPresent)
        {   
            ++maxLength;
            cout<<maxLength<<nl;;
        }else
        {
            cout<<maxLength<<nl;
        }
        
    }
    
    return 0;
}
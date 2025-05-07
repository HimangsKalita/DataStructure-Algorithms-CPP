// https://web.archive.org/web/20210215025640/https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/ispalin/

// Luffy with his crew is on the way to Dressrosa, where he will be fighting one of the warlords of the sea Doflamingo. But now he is getting bored and wants do a fun activity. He is very much obsessed with palindromes. Given a string S of lower case English alphabet of length N and two Integers L and R he wants to know whether all the letters of the substring from index L to R (L and R included) can be rearranged to form a palindrome or not. He wants to know this for Q values of L and R and needs your help in finding the answer.
// Palindrome is a string of characters which when reversed reads same as the original String.

// CONSTRAINTS :

// 1 ≤ t ≤ 10

// 1 ≤ N, Q ≤ 100000

// 1 ≤ L ≤ R ≤ N

// 'a' ≤ S[i] ≤ 'z' for 1 ≤ i ≤ N

// INPUT :

// First line contains an integer t denoting the number of test cases

// First line of each test case contains 2 space separated integers N and Q, the length of the string and number of queries respectively

// Next line contains the string S

// Each of the Next Q lines contain 2 space separated integers L and R

// OUTPUT :

// For each query of each test case print "YES" without quotes if letters of the substring from L to R can be rearranged to form a palindrome otherwise output "NO" in new line

// SAMPLE INPUT

// 2
// 5 5
// abcec
// 1 2
// 2 5
// 3 5
// 1 5
// 1 4
// 5 5
// aabbc
// 1 2
// 2 5
// 3 5
// 1 5
// 1 4

// SAMPLE OUTPUT

// NO
// NO
// YES
// NO
// NO
// YES
// NO
// YES
// YES
// YES

// Time Limit: 5.0 sec(s) for each input file.
// Memory Limit: 256 MB
// Source Limit: 1024 KB 

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n, q;
        cin>>n>>q;

        string s;
        cin>>s;

        vector<vector<int>> prefixChar(26, vector<int> (n+1, 0));

        for (int i = 0; i < n ; ++i)
        {
            prefixChar[s[i] - 'a'][i + 1]++;
        }

        for (int i = 0; i < 26; ++i)
        {
            for (int j = 1; j <= n;  ++j)
            {
                prefixChar[i][j] += prefixChar[i][j-1];
            }
        }

        while(q--){

            int l, r;
            cin>>l>>r;

            int numOdd = 0;

            for (int i = 0; i < 26; ++i)
            {
                if ((prefixChar[i][r] - prefixChar[i][l-1]) % 2 == 1)
                {
                    numOdd++;
                }
            }

            if (numOdd > 1)
            {
                cout<<"NO"<<"\n";
            }else{

                cout<<"YES"<<"\n";
            }
        }
    }

    return 0;
}
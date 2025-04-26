// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/good-string-3/

// Problem

// Given a string S, print the minimum number of characters you have to remove from the string S to make it a good string. A good string is a string in which all the characters are distinct.

// Input:
// First line of input contains a string S,

// . S consists of lowercase characters only.

// Output:
// Print an integer denoting the minimum number of characters you have to remove from S to make it a good string.
// Sample Input

// aabc

// Sample Output

// 1

#include <bits/stdc++.h>
using namespace std;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin>>str;

    unordered_map<char, int> chFreq;

    int freq;

    int count = 0;

    for(const char &ch: str) {

        freq = ++chFreq[ch];

        if(freq > 1) {

            count++;
            chFreq[ch]--;
        }
    }

    cout<<count;
}


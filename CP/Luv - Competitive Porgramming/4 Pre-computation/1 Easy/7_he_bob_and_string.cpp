// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/bob-and-string-easy/

// Bob and String
// 15331
// 88%
// 20
// ★★★★★

// 3.7
// 50 votes
// Approved, Basic Programming, Easy, Hash Maps, Open
// Share
// Details
// Submissions
// Discussion
// Similar Problems
// Editorial
// Problem

// Bob and Khatu both love the string. Bob has a string S and Khatu has a string T. They want to make both string S and T to anagrams of each other. Khatu can apply two operations to convert string T to anagram of string S which are given below:
// 1.) Delete one character from the string T.
// 2.) Add one character from the string S.

// Khatu can apply above both operation as many times he want. Find the minimum number of operations required to convert string T so that both T and S will become anagram of each other.

// Input:

// First line of input contains number of test cases T. Each test case contains two lines. First line contains string S and second line contains string T.

// Output:

// For each test case print the minimum number of operations required to convert string T to anagram of string S.

// Constraints:

// 1 ≤ T ≤ 10
// 1 ≤ |S|,|T| ≤ 105
// Sample Input

// 4
// abc
// cba
// abd
// acb
// talentpad
// talepdapd
// code
// road

// Sample Output

// 0
// 2
// 4
// 4

// Time Limit: 5
// Memory Limit: 256
// Source Limit: 

#include <bits/stdc++.h>
using namespace std;

int minChanges(string &str1, string &str2) {

    unordered_map<char, int> charFreq;

    for(int i =0; i<str1.length(); ++i) {

        charFreq[str1[i]]++;
    }

    for(int i =0; i<str2.length(); ++i) {

        charFreq[str2[i]]--;
    }

    int totalChanges = 0;

    for(int i=0; i<256; ++i) {

        if(charFreq[i] != 0) {

            totalChanges += abs(charFreq[i]);
        }
    }

    return totalChanges;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--) {

        string str1, str2;
        cin>>str1>>str2;

        cout<<minChanges(str1, str2)<<"\n";
    }
}
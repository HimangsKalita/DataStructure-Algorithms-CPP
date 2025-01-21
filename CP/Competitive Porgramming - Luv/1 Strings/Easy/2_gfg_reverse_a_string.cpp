// https://www.geeksforgeeks.org/problems/reverse-a-string/1

// You are given a string s, and your task is to reverse the string.

// Examples:

// Input: s = "Geeks"
// Output: "skeeG"

// Input: s = "for"
// Output: "rof"

// Input: s = "a"
// Output: "a"

// Constraints:
// 1 <= s.size() <= 106
// s contains only alphabetic characters (both uppercase and lowercase).

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    string s;
    cin>>s;

    int i = 0, j = s.size() - 1;

    while(i<j){
        
        swap(s[i], s[j]);
    }

    cout<<s;

    return 0;
}


// https://www.hackerrank.com/challenges/c-tutorial-strings/problem

// Input Format

// You are given two strings,
// and

// , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

// Output Format

// In the first line print two space-separated integers, representing the length of
// and respectively.
// In the second line print the string produced by concatenating and ().
// In the third line print two strings separated by a space, and . and are the same as and

// , respectively, except that their first characters are swapped.

// Sample Input

// abcd
// ef

// Sample Output

// 4 2
// abcdef
// ebcd af

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    cout<<str1<<endl<<str2;
    

    return 0;
}


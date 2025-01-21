// https://leetcode.com/problems/to-lower-case/description/

// Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.



// Example 1:

// Input: s = "Hello"
// Output: "hello"

// Example 2:

// Input: s = "here"
// Output: "here"

// Example 3:

// Input: s = "LOVELY"
// Output: "lovely"



// Constraints:

//     1 <= s.length <= 100
//     s consists of printable ASCII characters.

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    string s;
    cin>>s;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] <= 91)
        {
            char ch = (char)s[i+32];
            s[i] = ch;
        }
    }

    cout<<s;

    return 0;
}


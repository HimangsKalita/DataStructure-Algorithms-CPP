//https://leetcode.com/problems/goal-parser-interpretation

// You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

// Given the string command, return the Goal Parser's interpretation of command

// Example 1:

// Input: command = "G()(al)"
// Output: "Goal"
// Explanation: The Goal Parser interprets the command as follows:
// G -> G
// () -> o
// (al) -> al
// The final concatenated result is "Goal".
// Example 2:

// Input: command = "G()()()()(al)"
// Output: "Gooooal"
// Example 3:

// Input: command = "(al)G(al)()()G"
// Output: "alGalooG"

#include <bits/stdc++.h>
using namespace std;
#define ll int long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string command;
    cin>>command;

    string str;

    for (int i = 0; i < command.length(); ++i)
    {
        if (command[i]=='G')
        {
            str.push_back('G');

        }else if (command[i]=='(' && command[i+1] == ')')
        {
            str.push_back('o');
            i += 1;
        }
        else if (command[i]=='(' && command[i+1] == 'a')
        {
            str.push_back('a');
            str.push_back('l');
            i += 3;
        }
    }

    cout<<str;
    
    
    return 0;
}
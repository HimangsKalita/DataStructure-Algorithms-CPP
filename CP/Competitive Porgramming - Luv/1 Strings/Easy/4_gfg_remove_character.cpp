// https://www.geeksforgeeks.org/problems/remove-character3815/1

// Given two strings string1 and string2, remove those characters from first string(string1) which are present in second string(string2). Both the strings are different and contain only lowercase characters.
// NOTE: Size of  first string is always greater than the size of  second string( |string1| > |string2|).


// Example 1:

// Input:
// string1 = "computer"
// string2 = "cat"
// Output: "ompuer"
// Explanation: After removing characters(c, a, t)
// from string1 we get "ompuer".

// Example 2:

// Input:
// string1 = "occurrence"
// string2 = "car"
// Output: "ouene"
// Explanation: After removing characters
// (c, a, r) from string1 we get "ouene".



// Your Task:  
// You dont need to read input or print anything. Complete the function removeChars() which takes string1 and string2 as input parameter and returns the result string after removing characters from string2  from string1.


// Expected Time Complexity:O( |String1| + |String2| )
// Expected Auxiliary Space: O(|String1|)


// Constraints:
// 1 <= |String1| , |String2| <= 50

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    string s1,s2;
    cin>>s1;
    cin>>s2;

    int chars[26] = {0};

    for (int i = 0; i < s2.size(); ++i)
    {
        chars[s2[i] - 'a']++;
    }

    string s3;

    for (int i = 0; i < s1.size(); ++i)
    {
        if (chars[s1[i] - 'a'] == 0)
        {
            s3.push_back(s1[i]);
        }
    }

    cout<<s3;

    return 0;
}


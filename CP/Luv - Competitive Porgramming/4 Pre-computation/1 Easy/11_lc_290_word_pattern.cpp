// https://leetcode.com/problems/word-pattern/

// 290. Word Pattern
// Solved
// Easy
// Topics
// Companies

// Given a pattern and a string s, find if s follows the same pattern.

// Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s. Specifically:

//     Each letter in pattern maps to exactly one unique word in s.
//     Each unique word in s maps to exactly one letter in pattern.
//     No two letters map to the same word, and no two words map to the same letter.



// Example 1:

// Input: pattern = "abba", s = "dog cat cat dog"

// Output: true

// Explanation:

// The bijection can be established as:

//     'a' maps to "dog".
//     'b' maps to "cat".

// Example 2:

// Input: pattern = "abba", s = "dog cat cat fish"

// Output: false

// Example 3:

// Input: pattern = "aaaa", s = "dog cat cat dog"

// Output: false



// Constraints:

//     1 <= pattern.length <= 300
//     pattern contains only lower-case English letters.
//     1 <= s.length <= 3000
//     s contains only lowercase English letters and spaces ' '.
//     s does not contain any leading or trailing spaces.
//     All the words in s are separated by a single space.

#include <bits/stdc++.h>
using namespace std;

bool wordPattern(string pattern, string s) {

    vector<string> strs;

    stringstream ss(s);

    string word;

    while(ss >> word){

        strs.push_back(word);
    }

    if (pattern.size() != strs.size())
    {
        return false;
    }

    unordered_map<char, string> charFreq;

    unordered_map<string, char> stringFreq;

    for (int i = 0; i < pattern.size(); ++i)
    {

        char c = pattern[i];
        string w = strs[i];

        if (charFreq.find(c) != charFreq.end() && charFreq[c] != w)
        {
            return false;
        }

        if (stringFreq.find(w) != stringFreq.end() && stringFreq[w] != c)
        {
            return false;
        }

        charFreq[pattern[i]] = w;
        stringFreq[strs[i]] = c;
    }

    return true;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        string pattern, s;
        cin>>pattern;
        cin.ignore();
        getline(cin, s);

        cout<<wordPattern(pattern, s)<<"\n";
    }

    return 0;
}
// https://leetcode.com/problems/valid-anagram/description/

// 242. Valid Anagram
// Solved
// Easy
// Topics
// Companies

// Given two strings s and t, return true if t is an

// of s, and false otherwise.



// Example 1:

// Input: s = "anagram", t = "nagaram"

// Output: true

// Example 2:

// Input: s = "rat", t = "car"

// Output: false



// Constraints:

//     1 <= s.length, t.length <= 5 * 104
//     s and t consist of lowercase English letters.



// Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {

    unordered_map<char, int> charFreq;

    for(int i=0;i<s.size();++i) {

        charFreq[s[i]]++;
    }

    for(int i=0;i<t.size();++i) {

        charFreq[t[i]]--;
    }

    for(const auto &freq: charFreq) {

        if(freq.second != 0) {

            return false;
        }
    }

    return true;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        string s, t;
        cin>>s>>t;

        cout<<isAnagram(s, t)<<"\n";
    }

    return 0;
}
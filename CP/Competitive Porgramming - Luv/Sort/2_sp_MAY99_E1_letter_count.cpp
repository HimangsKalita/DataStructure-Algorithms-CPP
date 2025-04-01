// https://www.spoj.com/problems/MAY99_E1/



// In this problem, you will be given a string of less than 1000 characters. The string will contain uppercase and lowercase letters.

// Your task is to print the character appearing with maximum frequency. If there are more than 1 such character, print the one with lower ASCII value

// Consider lowercase letters as different from uppercase letters, i.e. 'a' is different from 'A'.
// Input

// Single line containing the string
// Output

// The character occurring most number of times in the string.
// Example

// Input 1:
// abcdabcdaaaa

// Output 1:
// a

// Input 2:
// abcAbcAbcabc

// Output 2:
// b

// Input 3:
// aDDa

// Output 3:
// D

#include <bits/stdc++.h>
using namespace std;

bool comp(pair<char, int> &a, pair<char, int> &b){

    if (a.second != b.second)
    {
        return a.second > b.second;
    }

    return a.first < b.first;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    string str;
    cin>>str;

    unordered_map<char, int> chFreq;

    for(char ch: str)
    {
        chFreq[ch]++;
    }

    vector<pair<char, int>> sortedFreq(chFreq.begin(), chFreq.end()); 

    sort(sortedFreq.begin(), sortedFreq.end(), comp);

    auto it = sortedFreq.begin();

    if (it != sortedFreq.end()) {
        cout << (*it).first;
    }

    // unordered_map<char, int> chFreq;

    // int maxFreq = 0;
    // char ansCh = CHAR_MAX;

    // for(const char &ch: str)
    // {
    //     chFreq[ch]++;

    //     if (chFreq[ch] > maxFreq || (chFreq[ch] == maxFreq && ch < ansCh))
    //     {
    //         maxFreq = chFreq[ch];
    //         ansCh = ch;
    //     }
    // }

    // cout<<ansCh;

    return 0;
}


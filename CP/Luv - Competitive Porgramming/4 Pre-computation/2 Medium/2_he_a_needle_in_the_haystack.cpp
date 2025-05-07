// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/a-needle-in-the-haystack-1/

// A Needle in the Haystack
// 15605
// 35%
// 30
// ★★★★★

// 3.7
// 47 votes
// Ad-Hoc, Algorithms, Approved, Hash Maps, Medium, Open
// Share
// Details
// Submissions
// Discussion
// Similar Problems
// Editorial
// Problem

// Our hacker, Little Stuart lately has been fascinated by ancient puzzles. One day going through some really old books he finds something scribbled on the corner of a page. Now Little Stuart believes that the scribbled text is more mysterious than it originally looks, so he decides to find every occurrence of all the permutations of the scribbled text in the entire book. Since this is a huge task, Little Stuart needs your help, he needs you to only figure out if any permutation of the scribbled text exists in the given text string, so he can save time and analyze only those text strings where a valid permutation is present.

// Input:
// First line contains number of test cases T.Each test case contains two lines ,first line contains pattern and next line contains a text string. All characters in both the strings are in lowercase only [a-z].

// Output:
// For each test case print "YES" or "NO" (quotes for clarity) depending on whether any permutation of the pattern exists in the text string.

// Constraints:
// 1 ≤ T ≤ 100
// 1 ≤ |Pattern| ≤ 1000
// 1 ≤ |Text String| ≤ 100000
// Sample Input

// 3

// hack

// indiahacks

// code

// eddy

// coder

// iamredoc

// Sample Output

// YES

// NO

// YES

// Time Limit: 2
// Memory Limit: 256

#include <bits/stdc++.h>
using namespace std;

// Brute Force
// Time - O(str.size() * pattern.size())
// Space - O(pattern.size())

// bool isPermutationPattern(string pattern, string str) {

//     int n = pattern.size();
//     int m = str.size();

//     vector<int> patternFreq(26, 0);

//     for(int i=0; i< n; ++i) {

//         patternFreq[pattern[i] - 'a']++;
//     }

//     for (int i = 0; i <=m-n; ++i)
//     {
//         vector<int> strFreq(26, 0);

//         for(int j=i; j<= n+i-1; ++j) {

//             strFreq[str[j] - 'a']++;
//         }

//         int flag = true;

//         for (int i = 0; i < 26; ++i)
//         {

//             if (patternFreq[i] > 0 && (patternFreq[i] != strFreq[i]))
//             {
//                 flag = false;
//             }
//         }

//         if (flag)
//         {
//             return flag;
//         }
//     }

//     return false;
// }

// Sliding Window
// Time - O(str.size())
// Space - O(pattern.size())

bool isPermutationPattern(string pattern, string str) {

    int n = pattern.size();
    int m = str.size();

    if (n > m)
    {
        return false;
    }

    vector<int> patternFreq(26, 0);
    vector<int> strFreq(26, 0);

    for(int i=0; i < n; ++i) {

        patternFreq[pattern[i] - 'a']++;
        strFreq[str[i] - 'a']++;
    }

    for (int i = n; i < m; ++i)
    {

        if (patternFreq == strFreq)
        {
            return true;
        }

        strFreq[str[i-n] - 'a']--;
        strFreq[str[i] - 'a']++;
    }

    if (patternFreq == strFreq)
    {
        return true;
    }

    return false;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--) {

        string pattern, str;
        cin>>pattern>>str;

        if(isPermutationPattern(pattern, str)) {

            cout<<"YES"<<"\n";
        }else {

            cout<<"NO"<<"\n";
        }
    }
}
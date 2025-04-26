// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/

// Problem

// You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

// Input Format
// The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

// Output Format
// Print the required answer on a single line.

// Constraints

// Note
// String S consists of lowercase English Alphabets only.
// Sample Input

// aba

// Sample Output

// YES

// Time Limit: 1
// Memory Limit: 256
// Source Limit: 

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    string s;
    cin>>s;

    int i=0, j=s.size() - 1;

    bool flag = true;

    while(i<j){

        if (s[i] != s[j])
        {
            flag = false;
            break;
        }

        i++;
        j--;
    }

    if (flag)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }

    return 0;
}

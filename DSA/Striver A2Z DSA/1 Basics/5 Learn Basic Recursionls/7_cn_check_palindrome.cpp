// https://www.naukri.com/code360/problems/check-palindrome-recursive_624386?leftPanelTabValue=PROBLEM

//  Check Palindrome (recursive)
// Moderate
// 80/80
// 87 upvotes
// Problem statement

// Determine if a given string ‘S’ is a palindrome using recursion. Return a Boolean value of true if it is a palindrome and false if it is not.
// Note: You are not required to print anything, just implement the function. Example:

// Input: s = "racecar"
// Output: true
// Explanation: "racecar" is a palindrome.

// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:

// abbba

// Sample Output 1:

// true

// Explanation Of Sample Input 1 :

// “abbba” is a palindrome

// Sample Input 2:

// abcd

// Sample Output 2:

// false

// Explanation Of Sample Input 2 :

// “abcd” is not a palindrome.

// Constraints:

// 0 <= |S| <= 10^6
// where |S| represents the length of string S.

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &str, int left, int right) {

    if(left > right) return true;

    if(str[left] != str[right]) {

        return false;
    }

    return checkPalindrome(str, left+1, right - 1);
}

bool isPalindrome(string& str) {

    return checkPalindrome(str, 0, str.length() - 1);
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        string str;
        cin>>str;

        cout<<isPalindrome(str)<<"\n";
    }

    return 0;
}
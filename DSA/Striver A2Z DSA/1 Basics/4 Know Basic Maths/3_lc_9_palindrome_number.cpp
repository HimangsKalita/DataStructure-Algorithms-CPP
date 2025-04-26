// https://leetcode.com/problems/palindrome-number/description/

// Given an integer x, return true if x is a

// , and false otherwise.



// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.

// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.



// Constraints:

//     -231 <= x <= 231 - 1


// Follow up: Could you solve it without converting the integer to a string?

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {

    if (x<0)
    {
        return false;
    }

    if (x!= 0 && x % 10 == 0)
    {
        return false;
    }

    int rev = 0;

    while(x > rev){

        int lastDigit = x % 10;

        rev = (rev*10) + lastDigit;

        x /= 10;
    }

    return x == rev || x == rev/10;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int x;
        cin>>x;

        cout<<isPalindrome(x)<<"\n";
    }

    return 0;
}



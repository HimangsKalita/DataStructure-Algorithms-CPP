// https://leetcode.com/problems/reverse-integer/description/

// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).



// Example 1:

// Input: x = 123
// Output: 321

// Example 2:

// Input: x = -123
// Output: -321

// Example 3:

// Input: x = 120
// Output: 21



// Constraints:

//     -231 <= x <= 231 - 1

#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {

    int ans = 0;

    while(x!=0){

        int lastDigit = x%10;

        x /= 10;

        if (ans > INT_MAX/10 || (ans == INT_MAX/10 && lastDigit > INT_MAX%10))
        {
            return 0;
        }

        if (ans < INT_MIN/10 || (ans == INT_MIN/10 && lastDigit < INT_MIN%10))
        {
            return 0;
        }

        ans = (ans*10) + lastDigit;
    }

    return ans;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int x;
    cin>>x;

    cout<<reverse(x);

    return 0;
}


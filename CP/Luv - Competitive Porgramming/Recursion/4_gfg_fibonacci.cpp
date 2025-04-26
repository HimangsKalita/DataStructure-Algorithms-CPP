// https://www.geeksforgeeks.org/problems/nth-fibonacci-number1335/1

// Nth Fibonacci Number
// Difficulty: EasyAccuracy: 22.3%Submissions: 354K+Points: 2

// Given a non-negative integer n, your task is to find the nth Fibonacci number.

// The Fibonacci sequence is a sequence where the next term is the sum of the previous two terms. The first two terms of the Fibonacci sequence are 0 followed by 1. The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21

// The Fibonacci sequence is defined as follows:

//     F(0) = 0
//     F(1) = 1
//     F(n) = F(n - 1) + F(n - 2) for n > 1

// Examples :

// Input: n = 5
// Output: 5
// Explanation: The 5th Fibonacci number is 5.

// Input: n = 0
// Output: 0 
// Explanation: The 0th Fibonacci number is 0.

// Input: n = 1
// Output: 1
// Explanation: The 1st Fibonacci number is 1.

// Constraints:
// 0 ≤ n ≤ 30

#include <bits/stdc++.h>
using namespace std;

// Recursion 
// Time - O(2^N)
// Space - O(1)

// int nthFibonacci(int n) {

//     if(n==0){

//         return 0;
//     }

//     if (n==1) {

//         return 1;
//     }

//     return nthFibonacci(n-1) + nthFibonacci(n-2);
// }

// Brute/Bottoms up
// Time - O(n)
// Space - O(1)

int nthFibonacci(int n) {

    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    int a = 0, b = 1,c;

    for (int i = 2; i <= n; ++i)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        cout<<nthFibonacci(n)<<"\n";
    }

    return 0;
}


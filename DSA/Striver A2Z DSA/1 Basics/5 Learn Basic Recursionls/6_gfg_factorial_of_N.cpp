// https://www.geeksforgeeks.org/problems/factorial5739/1

// Factorial
// Difficulty: BasicAccuracy: 40.58%Submissions: 158K+Points: 1

// Given a positive integer, n. Find the factorial of n.

// Examples :

// Input: n = 5
// Output: 120
// Explanation: 1 x 2 x 3 x 4 x 5 = 120

// Input: n = 4
// Output: 24
// Explanation: 1 x 2 x 3 x 4 = 24

// Constraints:
// 0 <= n <= 12

#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {

    if(n == 0 || n == 1) return 1;

    return n * factorial(n-1);
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    cout<<factorial(n);

    return 0;
}
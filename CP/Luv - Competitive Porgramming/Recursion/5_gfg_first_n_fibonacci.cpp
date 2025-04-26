// https://www.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1

// First n Fibonacci
// Difficulty: BasicAccuracy: 29.92%Submissions: 251K+Points: 1

// Given a number n, return an array containing the first n Fibonacci numbers.

// Note: The first two numbers of the series are 0 and 1.

// Examples:

// Input: n = 5
// Output: [0, 1, 1, 2, 3]

// Input: n = 7
// Output: [0, 1, 1, 2, 3, 5, 8]

// Input: n = 2
// Output: [0, 1]

// Constraints:
// 1 <= n <= 30


#include <bits/stdc++.h>
using namespace std;

// Brute/Bottoms up
// Time - O(n)
// Space - O(1)

// vector<int> fibonacciNumbers(int n) {

//     int a = 0;

//     vector<int> ans;

//     ans.push_back(a); 

//     if(n==1) {

//         return ans;
//     }

//     int b = 1;

//     ans.push_back(b);

//     if(n==2) {

//         return ans;
//     }

//     int c;

//     for(int i=2;i<n;i++) {

//         c = a + b;
//         a = b;
//         b = c;

//         ans.push_back(b);
//     }

//     return ans;
// }

// Fibonnaci Tops down
// Time - O(n)
// Space - O(30)

vector<int> hashing(31, -1); 

int fibonacci(int n) {

    if (hashing[n] != -1)
    {
        return hashing[n];
    }

    if (n == 0)
    {
        hashing[0] = 0;
        return 0;
    }

    if (n == 1)
    {
        // hashing[0] = 0;
        hashing[1] = 1;
        return 1;
    }

    hashing[n] = fibonacci(n-1) + fibonacci(n-2);

    return hashing[n];
}

vector<int> fibonacciNumbers(int n) {

    fibonacci(n-1);

    vector<int> ans = {hashing.begin(), hashing.begin() + n};

    return ans;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int> nums = fibonacciNumbers(n);

        for(const int &num: nums)
        {
            cout<<num<<" ";
        }

        cout<<"\n";
    }   

    return 0;
}
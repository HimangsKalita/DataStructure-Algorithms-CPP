// https://www.geeksforgeeks.org/problems/sieve-of-eratosthenes5242/1

// Sieve of Eratosthenes
// Difficulty: EasyAccuracy: 47.43%Submissions: 63K+Points: 2

// Given a positive integer n, calculate and return all prime numbers less than or equal to n using the Sieve of Eratosthenes algorithm.

// A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.

// Examples:

// Input: n = 10
// Output: 2 3 5 7
// Explanation: Prime numbers less than equal to 10 are 2 3 5 and 7.

// Input: n = 35
// Output: 2 3 5 7 11 13 17 19 23 29 31
// Explanation: Prime numbers less than equal to 35 are 2 3 5 7 11 13 17 19 23 29 and 31.

// Constraints:
// 1<= n <= 104

#include <bits/stdc++.h>
using namespace std;

vector<int> sieveOfEratosthenes(int n) {

    if(n <= 1) {

        return {};
    }

    vector<int> isPrime(n+1, 1);
    isPrime[0] = isPrime[1] = 0;

    for(int i=2; i*i <= n; ++i) {

        if(isPrime[i] == 1) {

            for(int j = i*i; j <= n; j += i) {

                isPrime[j] = 0;
            }
        }
    }

    vector<int> primes;

    for(int i=2;i<=n; ++i) {

        if(isPrime[i] == 1) {

            primes.push_back(i);
        }
    }

    return primes;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int> ans = sieveOfEratosthenes(n);

        for(const auto &val: ans)
        {
            cout<<val<<" ";
        }

        cout<<"\n";
    }

    return 0;
}
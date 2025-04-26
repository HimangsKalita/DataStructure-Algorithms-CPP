// https://www.geeksforgeeks.org/problems/count-primes-in-range1604/0

// Count Primes In Range
// Difficulty: EasyAccuracy: 40.37%Submissions: 13K+Points: 2

// Given two numbers L and R(L<R). Count all the prime numbers in the range [L, R].

// Example 1:

// Input:
// L=1,R=10
// Output:
// 4
// Explanation:
// There are 4 primes in this range, 
// which are 2,3,5 and 7.

// Example 2:

// Input:
// L=5,R=10
// Output:
// 2
// Explanation:
// There are 2 primes in this range, 
// which are 5 and 7.


// Your Task:
// You don't need to read input or print anything. Your task is to complete the function countPrimes() which takes the two integers L and R as input parameters and returns the number of prime numbers in the range [L, R].


// Expected Time Complexity:O(RLogLog(R))
// Expected Auxillary Space:O(R)


// Constraints:
// 1<=L<R<=2*105

#include <bits/stdc++.h>
using namespace std;

int countPrimes(int L, int R) {

    vector<int> isPrime(R+1, 1);

    if(L==1) {

        isPrime[1] = 0;
    }

    for(int i=2; i*i<= R; ++i) {

        if(isPrime[i] == 1) {

            for(int j=i*i; j<=R; j += i) {

                isPrime[j] = 0;
            }
        }

        if(i > 2) {

            ++i;
        }
    }

    int count = 0;

    for(int i=L; i<=R;++i) {

        if(isPrime[i] == 1) {

            count++;
        }
    }

    return count;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int L, R;
        cin>>L>>R;

        cout<<countPrimes(L, R)<<"\n";
    }

    return 0;
}
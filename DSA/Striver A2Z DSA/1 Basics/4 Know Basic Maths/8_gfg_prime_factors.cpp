// https://www.geeksforgeeks.org/problems/prime-factors5052/1

// Prime Factors
// Difficulty: EasyAccuracy: 30.47%Submissions: 60K+Points: 2Average Time: 15m

// Given a number N. Find its unique prime factors in increasing order.


// Example 1:

// Input: N = 100
// Output: 2 5
// Explanation: 2 and 5 are the unique prime
// factors of 100.

// Example 2:

// Input: N = 35
// Output: 5 7
// Explanation: 5 and 7 are the unique prime
// factors of 35.



// Your Task:
// You don't need to read or print anything. Your task is to complete the function AllPrimeFactors() which takes N as input parameter and returns a list of all unique prime factors of N in increasing order.



// Expected Time Complexity: O(N)
// Expected Space Complexity: O(N)


// Constraints:
// 1 <= N  <= 106

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {

    if(n <= 1) return false;

    for(int i=2;i*i<=n;++i) {

        if(n%i ==0) {

            return false;
        }
    }

    return true;
}

vector<int>AllPrimeFactors(int n) {
    
    vector<int> primeFactors;
    
    for(int i=2;i*i<=n;++i) {
        
        if(n%i ==0){
            
            primeFactors.push_back(i);
            
            while(n%i ==0) {
                
                n = n / i;
            }
        }
    }
    
    if(n!=1) {
        
        primeFactors.push_back(n);
    }
    
    return primeFactors;
}

// vector<int>AllPrimeFactors(int n) {

//     vector<int> ans;

//     for(int i=1;i*i<=n;++i) {

//         if(n%i == 0) {

//             if(isPrime(i)) {

//                 ans.push_back(i);
//             }

//             if(isPrime(n/i) && i != n/i) {

//                 ans.push_back(n/i);
//             }
//         }
//     }

//     return ans;
// }

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    vector<int> ans = AllPrimeFactors(n);

    for(const auto &value: ans)
    {
        cout<<value<<" ";
    }

    return 0;
}
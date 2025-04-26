// https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

// Sum 1 to n Divisors
// Difficulty: EasyAccuracy: 43.37%Submissions: 214K+Points: 2

// Given a positive integer n, The task is to find the value of Σi F(i) where i is from 1 to n and function F(i) is defined as the sum of all divisors of i.

// Examples:

// Input: n = 4
// Output: 15
// Explanation:
// F(1) = 1
// F(2) = 1 + 2 = 3
// F(3) = 1 + 3 = 4
// F(4) = 1 + 2 + 4 = 7
// So, F(1) + F(2) + F(3) + F(4)
//     = 1 + 3 + 4 + 7 = 15

// Input: n = 5
// Output: 21
// Explanation:
// F(1) = 1
// F(2) = 1 + 2 = 3
// F(3) = 1 + 3 = 4
// F(4) = 1 + 2 + 4 = 7
// F(5) = 1 + 5 = 6
// So,  F(1) + F(2) + F(3) + F(4) + F(5)
//     = 1 + 3 + 4 + 7 + 6 = 21

// Input: n = 1
// Output: 1
// Explanation:
// F(1) = 1
// So,  F(1) = 1 

// Constraints:
// 1 <= n <= 10^5

#include <bits/stdc++.h>
using namespace std;

int* printDivisors(int n, int &size){

    vector<int> divisors;

    for(int i=1;i<=n;++i){

        if(n%i == 0) {

            divisors.push_back(i);
        }
    }

    size = divisors.size();

    int* ans = new int[size];

    std::copy(divisors.begin(), divisors.end(), ans);

    return ans;
}

int sumOfDivisors(int n) {

    long long sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        sum += floor(n/i) * i;
    }

    return sum;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        cout<<sumOfDivisors(n)<<"\n";
    }

    return 0;
}
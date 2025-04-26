// https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1

// Given two integers a and b, the task is to compute their LCM and GCD and return an array containing their LCM and GCD.

// Examples:

// Input: a = 5 , b = 10
// Output: [10, 5]
// Explanation: LCM of 5 and 10 is 10, while their GCD is 5.

// Input: a = 14 , b = 8
// Output: [56, 2]
// Explanation: LCM of 14 and 8 is 56, while their GCD is 2.

// Input: a = 1 , b = 1
// Output: [1, 1]
// Explanation: LCM of 1 and 1 is 1, while their GCD is 1.

// Constraints:
// 1 <= a, b <= 109

#include <bits/stdc++.h>
using namespace std;

int getHCF(int a, int b) {

    while(b != 0) {

        int t = b;

        b = a % b;

        a = t;
    }

    return a;
}

int getLCM(int a, int b, int gcf) {

    return (1LL * a * b)/gcf;
}

vector<int> lcmAndGcd(int a, int b) {

    int gcf = getHCF(a, b);

    int lcm = getLCM(a, b, gcf);

    return {lcm, gcf};
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    cout<<13%10<<"\n";

    int t;
    cin>>t;

    while(t--){

        int a, b;
        cin>>a>>b;

        vector<int> lg = lcmAndGcd(a, b);

        cout<<lg[0]<<" "<<lg[1]<<"\n";
    }

    return 0;
}


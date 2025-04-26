// Find factorial of n 

// Time complexity of Recursion

// 1. Number of function calls of itself
// 2. Complexity of each function call

// In case of factorial
// Number of function calls - O(n)
// Complexity of each function call - O(1)
// Total time complexity - O(n*1) = O(n)

#include <bits/stdc++.h>
using namespace std;

int fact(int n) {

    if (n == 0)
    {
        return 1;
    }

    return fact(n-1) * n;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    cout<<fact(n)<<"\n";

    return 0;
}


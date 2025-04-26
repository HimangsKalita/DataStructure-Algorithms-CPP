// Factorial of a number N
// For n = 5
// 1X2X3X4X5 = 120

int fact(int n) {

    if (n == 1)
    {
        return 1;
    }

    return n*fact(n-1);
}

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    cout<<fact(n);

    return 0;
}
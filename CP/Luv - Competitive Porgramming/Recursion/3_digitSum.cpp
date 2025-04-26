// Digit Sum

#include <bits/stdc++.h>
using namespace std;

int digitSum(int n) {

    if (n == 0)
    {
        return 0;
    }

    return n%10 + digitSum(n/10);
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    cout<<digitSum(n)<<"\n";

    return 0;
}
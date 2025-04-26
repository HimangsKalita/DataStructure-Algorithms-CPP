#include <bits/stdc++.h>
using namespace std;

void printName(int n) {

    if (n == 0)
    {
        return ;
    }

    cout<<"Himangshu"<<"\n";

    printName(--n);
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    printName(n);

    return 0;
}
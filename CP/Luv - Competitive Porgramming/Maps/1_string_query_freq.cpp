/*
Given N Strings and Q queries in each query you are given a string print frequency of that string

N<=10^6
|S| <= 100
Q<= 10^6
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    unordered_map<string, int> m;

    int n;
    cin>>n;

    string str;

    for (int i = 0; i < n; ++i)
    {
        cin>>str;

        m[str]++;   
    }

    int q;
    cin>>q;

    for (int i = 0; i < q; ++i)
    {
        cin>>str;

        cout<<m[str]<<"\n";
    }   

    return 0;
}


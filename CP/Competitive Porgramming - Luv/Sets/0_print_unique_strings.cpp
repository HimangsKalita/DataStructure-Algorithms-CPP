/*
Given N strings, print unique strings in lexiographical order
N<=10^5
|s|<=100000
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    set<string> strings;

    string s;

    for (int i = 0; i < n; ++i)
    {
        cin>>s;

        strings.insert(s);
    }

    for(const auto &value: strings)
    {
        cout<<value<<endl;
    }

    return 0;
}


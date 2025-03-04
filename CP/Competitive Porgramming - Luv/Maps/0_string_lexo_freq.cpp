/*
Given N Strings, print unique strings in lexiographical order with their frequency 
N <= 10^5
|s| <= 100
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    map<string, int> m; 

    string str;

    for (int i = 0; i < n; ++i)
    {
        cin>>str;

        // auto it = m.find(str);

        // if (it != m.end())
        // {
        //  m[str] = (it->second) + 1;
        // }else {

        //  m[str] = 1;

        // }

        m[str]++;

    }

    for(const auto &value: m)
    {
        cout<<value.first<<" "<<value.second<<"\n";
    }

    return 0;
}


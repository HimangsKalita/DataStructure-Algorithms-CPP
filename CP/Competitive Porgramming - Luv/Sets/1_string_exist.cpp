/*
Given N strings and Q queries.
In each query you are given a string print "YES" if string is present else pring "NO"

N<=10^6
|s|<=100
Q<=10^6
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    unordered_set<string> strings; 

    string s;
    for (int i = 0; i < n; ++i)
    {
        cin>>s;
        strings.insert(s);
    }

    int q;
    cin>>q;

    while(q--){

        cin>>s;

        if(strings.find(s) != strings.end()) {

            cout<<"YES"<<endl;
        }else{

            cout<<"NO"<<endl;
        }
    }

    return 0;
}




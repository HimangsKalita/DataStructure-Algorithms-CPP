#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    unordered_map<int, int> test;

    test[1] = 10;
    test[2] = 20;
    test[3] = 30;

    if (test.find(5) != test.end())
    {
        cout<<"Doesn't exist"<<"\n";
    }

    for(const auto &it: test)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }

    return 0;
}
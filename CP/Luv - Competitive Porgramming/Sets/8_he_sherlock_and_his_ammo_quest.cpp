#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string, int> &a, pair<string, int> &b) {

    if(a.second != b.second) {

        return a.second > b.second;
    }

    return a.first < b.first;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    vector<pair<string, int>> suspects;

    string name;
    int jc;

    for(int i=0;i<n;++i) {

        cin>>name>>jc;

        suspects.push_back({name, jc});
    }

    sort(suspects.begin(), suspects.end(), comp);

    for(const auto &suspect: suspects) {

        cout<<suspect.first<<" "<<suspect.second<<"\n";
    }
}
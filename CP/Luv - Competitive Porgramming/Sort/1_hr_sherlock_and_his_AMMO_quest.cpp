// https://www.hackerearth.com/problem/algorithm/stl/

// Problem

// Sherlock is investigating that who was responsible for the massacre at the British embassy in Tbilisi.
// AMMO codeword signifies something. What can be its meaning?

// Sherlock is suspecting some people , and each of them has some jealousy coefficient.
// Consider yourself to be Dr.Watson. You need to arrange these names in decreasing order of jealousy.

// If two or more people have same jealousy coefficient , they must be arranged in lexicographical order.

// Input
// On the first line, you are provided the value N - the number of people Sherlock suspects.
// N lines follow.
// Each of these N lines comprises a string S and an integer X, signifying the name and the associated jealousy coefficient respectively.

// Output
// Print the N lines in the order specified above.

// Constraints
// 1<=N<=100000
// 1<=X<=1000
// 1<=|S|<=100
// Sample Input

// 3

// Smallwood 3

// Vivian 5

// Norbury 5

// Sample Output

// Norbury 5

// Vivian 5

// Smallwood 3

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
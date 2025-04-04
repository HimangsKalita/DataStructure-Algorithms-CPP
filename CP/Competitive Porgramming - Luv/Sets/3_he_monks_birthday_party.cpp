// https://www.hackerearth.com/problem/algorithm/monks-birthday-party/?fbclid=IwAR3COuGp9LqoHKWOnfS-duVdKrF0Vx5shbCbGeiWqSgkdoA2z9926vNy5Ew

// Problem

// Monk's birthday is coming this weekend! He wants to plan a Birthday party and is preparing an invite list with his friend Puchi. He asks Puchi to tell him names to add to the list.
// Puchi is a random guy and keeps coming up with names of people randomly to add to the invite list, even if the name is already on the list! Monk hates redundancy and hence, enlists the names only once.
// Find the final invite-list, that contain names without any repetition.

// Input:
// First line contains an integer T. T test cases follow.
// First line of each test contains an integer N, the number of names that Puchi pops up with.

// Output:
// For each testcase,Output the final invite-list with each name in a new line. The names in the final invite-list are sorted lexicographically.

// Constraints:
// 1 ≤ T ≤ 10
// 1 ≤ N ≤ 105
// 1 ≤ Length of each name ≤ 105
// Sample Input

// 1
// 7
// chandu
// paro
// rahul
// mohi
// paro
// arindam
// rahul

// Sample Output

// arindam
// chandu
// mohi
// paro
// rahul

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        set<string> names;

        string s;

        for (int i = 0; i < n; i++)
        {
            cin>>s;

            if (names.find(s) == names.end())
            {
                names.insert(s);
            }
        }

        for(const auto &value: names)
        {
            cout<<value<<endl;
        }
    }

    return 0;
}


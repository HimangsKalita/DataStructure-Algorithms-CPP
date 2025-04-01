// https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/

// Problem

// Monk is a multi-talented person, and prepares results for his college in his free time. (Yes, he is still in love with his old college!) He gets a list of students with their marks. The maximum marks which can be obtained in the exam is 100.

// The Monk is supposed to arrange the list in such a manner that the list is sorted in decreasing order of marks. And if two students have the same marks, they should be arranged in lexicographical manner.

// Help Monk prepare the same!

// Input format:
// On the first line of the standard input, there is an integer N, denoting the number of students. N lines follow, which contain a string and an integer, denoting the name of the student and his marks.

// Output format:
// You must print the required list.

// Constraints:
// 1 <= N <= 105
// 1 <= | Length of the name | <= 100
// 1 <= Marks <= 100
// Sample Input

// 3

// Eve 78

// Bob 99

// Alice 78

// Sample Output

// Bob 99

// Alice 78

// Eve 78

#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<int, string> &a, const pair<int, string> &b) {

    if (a.first != b.first)
    {
        return a.first > b.first;
    }

    return a.second < b.second;
}

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    vector<pair<int, string>> students;

    string name;
    int marks;

    for (int i = 0; i < n; ++i)
    {
        cin>>name>>marks;

        students.push_back({marks, name});
    }

    std::sort(students.begin(), students.end(), comp);

    for(const auto &value: students)
    {
        cout<<value.second<<" "<<value.first<<endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n;
//     cin>>n;

//     multiset<pair<int, string>> students;

//     string name;
//     int marks;

//     for(int i=0;i<n;++i) {

//         cin>>name>>marks;

//         students.insert({-1*marks, name});
//     }

//     for(auto it=students.begin(); it != students.end(); ++it) {

//         cout<<(it->second)<<" "<<-1*(it->first)<<"\n";
//     }
// }
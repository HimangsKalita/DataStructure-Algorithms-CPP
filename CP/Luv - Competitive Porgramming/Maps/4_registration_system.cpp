// https://codeforces.com/problemset/problem/4/C

// C. Registration system
// time limit per test
// 5 seconds
// memory limit per test
// 64 megabytes

// A new e-mail service "Berlandesk" is going to be opened in Berland in the near future. The site administration wants to launch their project as soon as possible, that's why they ask you to help. You're suggested to implement the prototype of site registration system. The system should work on the following principle.

// Each time a new user wants to register, he sends to the system a request with his name. If such a name does not exist in the system database, it is inserted into the database, and the user gets the response OK, confirming the successful registration. If the name already exists in the system database, the system makes up a new user name, sends it to the user as a prompt and also inserts the prompt into the database. The new name is formed by the following rule. Numbers, starting with 1, are appended one after another to name (name1, name2, ...), among these numbers the least i is found so that namei does not yet exist in the database.
// Input

// The first line contains number n (1 ≤ n ≤ 105). The following n lines contain the requests to the system. Each request is a non-empty line, and consists of not more than 32 characters, which are all lowercase Latin letters.
// Output

// Print n lines, which are system responses to the requests: OK in case of successful registration, or a prompt with a new name, if the requested name is already taken.
// Examples
// Input
// Copy

// 4
// abacaba
// acaba
// abacaba
// acab

// Output
// Copy

// OK
// OK
// abacaba1
// OK

// Input
// Copy

// 6
// first
// first
// second
// second
// third
// third

// Output
// Copy

// OK
// first1
// OK
// second1
// OK
// third1

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    unordered_map<string, int> names;

    for (int i = 0; i < n; ++i)
    {
        string str;
        cin>>str;

        int count = names[str]++;

        if (count == 0)
        {
            cout<<"OK"<<"\n";
        }else {

            cout<<str<<count<<"\n";
        }
    }

    return 0;
}


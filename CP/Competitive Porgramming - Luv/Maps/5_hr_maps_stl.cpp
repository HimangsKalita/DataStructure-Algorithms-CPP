// https://www.hackerrank.com/challenges/cpp-maps/problem

// You are appointed as the assistant to a teacher in a school and she is correcting the answer sheets of the students.Each student can have multiple answer sheets.So the teacher has

// queries:

// :Add the marks to the student whose name is

// .

// : Erase the marks of the students whose name is

// .

// : Print the marks of the students whose name is . (If didn't get any marks print

// .)

// Input Format

// The first line of the input contains
// where is the number of queries. The next lines contain query each.The first integer, of each query is the type of the query.If query is of type , it consists of one string and an integer and where is the name of the student and is the marks of the student.If query is of type or ,it consists of a single string where

// is the name of the student.

// Constraints

// Output Format

// For queries of type

// print the marks of the given student.

// Sample Input

// 7
// 1 Jesse 20
// 1 Jess 12
// 1 Jess 18
// 3 Jess
// 3 Jesse
// 2 Jess
// 3 Jess

// Sample Output

// 30
// 20
// 0

#include <bits/stdc++.h>
using namespace std;


int main() {

    int q;
    cin>>q;
    
    unordered_map<string, int> student;
    
    while(q--) {

        int type;
        cin>>type;

        string name;
        int marks;
        map<int, string>::iterator it;

        switch(type) {

        case 1:
            cin>>name;
            cin>>marks;

            student[name] = student[name] + marks;
            break;

        case 2:
            cin>>name;
            student.erase(name);
            break;
        case 3:
            cin>>name;

            marks = student[name];

            cout<<marks<<"\n";
            
            break;

        default:
            break;
        }
    }
    
    return 0;
}
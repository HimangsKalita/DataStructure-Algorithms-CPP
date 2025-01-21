// https://www.geeksforgeeks.org/problems/java-if-else-decision-making0924/0?category%255B%255D=Java&difficulty%255B%255D=-2&page=1&query=category%255B%255DJavadifficulty%255B%255D-2page1category%255B%255DJava

// Decision Making in Java
// Difficulty: BasicAccuracy: 60.12%Submissions: 145K+Points: 1

// Given two integers, n and m. The task is to check the relation between n and m. Return "lesser" if n < m,  "equal" if n == m, and "greater" if n > m.

// Examples :

// Input: n = 4, m = 8
// Output: lesser
// Explanation: 4 < 8 so print 'lesser'.

// Input: n = 8, m = 8
// Output: equal
// Explanation: 8 = 8 so print 'equal'.

// Input: n = 8, m = 4
// Output: greater
// Explanation: 8 > 4 so print 'greater'.

// Constraints:
// -109 <= m , n <= 109

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n,m;
    cin>>n>>m;

    if(m > n) {
        
        cout<<"lesser";
    }else if(n > m) {
        
        cout<<"greater";
    }else {
        
        cout<<"equal";
    }

    return 0;
}


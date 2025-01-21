// https://www.geeksforgeeks.org/problems/while-loop-printtable-java/1

// While loop- printTable - Java
// Difficulty: EasyAccuracy: 52.74%Submissions: 74K+Points: 2

// While loop is another loop like for loop but unlike for loop it only checks for one condition.
// Here, we will use a while loop and print a number n's table in reverse order.

// Examples:

// Input: n = 1
// Output: 10 9 8 7 6 5 4 3 2 1

// Input: n = 2
// Output: 20 18 16 14 12 10 8 6 4 2

// Constraints:
// 1 <= n<= 1000

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;

    int num = n;

    while(n>0){
        
        cout<<num*n<<" ";
        n--;
    }

    return 0;
}


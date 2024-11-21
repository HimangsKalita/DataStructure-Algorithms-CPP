// https://www.codechef.com/problems/FLOW006

// Sum of Digits

// You're given an integer N. Write a program to calculate the sum of all the digits of N.
// Input Format

// The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.
// Output Format

// For each test case, calculate the sum of digits of N, and display it in a new line.
// Constraints

//     1≤T≤10001≤T≤1000
//     1≤N≤10000001≤N≤1000000

// Sample 1:
// Input
// Output

// 3 
// 12345
// 31203
// 2123

// 15
// 9
// 8

// More Info
// Time limit1 secs
// Memory limit1.5 GB
// Source Limit50000 Bytes

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int sum = 0;

        while(n!=0){

            
            int last_num = n%10;
            sum += last_num;
            n = n / 10;
        }

        cout<<sum<<endl;
    }

    return 0;
}


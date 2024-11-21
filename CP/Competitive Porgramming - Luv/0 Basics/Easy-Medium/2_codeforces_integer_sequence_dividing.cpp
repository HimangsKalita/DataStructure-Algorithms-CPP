// https://codeforces.com/contest/1102/problem/A

//  Integer Sequence Dividing
// time limit per test
// 1 second
// memory limit per test
// 256 megabytes

// You are given an integer sequence 1,2,…,n
// . You have to divide it into two sets A and B in such a way that each element belongs to exactly one set and |sum(A)−sum(B)|

// is minimum possible.

// The value |x|
// is the absolute value of x and sum(S) is the sum of elements of the set S

// .
// Input

// The first line of the input contains one integer n
// (1≤n≤2⋅109

// ).
// Output

// Print one integer — the minimum possible value of |sum(A)−sum(B)|
// if you divide the initial sequence 1,2,…,n into two sets A and B

// .
// Examples
// Input
// Copy

// 3

// Output
// Copy

// 0

// Input
// Copy

// 5

// Output
// Copy

// 1

// Input
// Copy

// 6

// Output
// Copy

// 1

// Note

// Some (not all) possible answers to examples:

// In the first example you can divide the initial sequence into sets A={1,2}
// and B={3} so the answer is 0

// .

// In the second example you can divide the initial sequence into sets A={1,3,4}
// and B={2,5} so the answer is 1

// .

// In the third example you can divide the initial sequence into sets A={1,4,5}
// and B={2,3,6} so the answer is 1.

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;

    long long int sum = 0;

    for (int i = 1; i <= n ; ++i)
    {
        sum += i;
    }

    sum = sum/2;

    if (sum % 2 == 0)
    {
        cout<<0;
    }else
    {
        cout<<1;
    }

    return 0;
}


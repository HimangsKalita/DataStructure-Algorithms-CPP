// https://codeforces.com/problemset/problem/610/A

// time limit per test
// 1 second
// memory limit per test
// 256 megabytes

// Pasha has a wooden stick of some positive integer length n. He wants to perform exactly three cuts to get four parts of the stick. Each part must have some positive integer length and the sum of these lengths will obviously be n.

// Pasha likes rectangles but hates squares, so he wonders, how many ways are there to split a stick into four parts so that it's possible to form a rectangle using these parts, but is impossible to form a square.

// Your task is to help Pasha and count the number of such ways. Two ways to cut the stick are considered distinct if there exists some integer x, such that the number of parts of length x in the first way differ from the number of parts of length x in the second way.
// Input

// The first line of the input contains a positive integer n (1 ≤ n ≤ 2·109) — the length of Pasha's stick.
// Output

// The output should contain a single integer — the number of ways to split Pasha's stick into four parts of positive integer length so that it's possible to make a rectangle by connecting the ends of these parts, but is impossible to form a square.
// Examples
// Input
// Copy

// 6

// Output
// Copy

// 1

// Input
// Copy

// 20

// Output
// Copy

// 4

// Note

// There is only one way to divide the stick in the first sample {1, 1, 2, 2}.

// Four ways to divide the stick in the second sample are {1, 1, 9, 9}, {2, 2, 8, 8}, {3, 3, 7, 7} and {4, 4, 6, 6}. Note that {5, 5, 5, 5} doesn't work.


#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;

    int count = 0;

    if (n%2==0)
    {

        n = n/2;

        for (int i = 1; i < n; ++i)
        {
            if ((n-i != i) && (i <= n/2))
            {
                count++;
            }
        }

    }else {

        cout<<count;
    }

    return 0;
}


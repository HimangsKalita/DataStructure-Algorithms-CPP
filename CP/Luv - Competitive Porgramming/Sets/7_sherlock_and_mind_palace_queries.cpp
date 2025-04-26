// https://www.hackerearth.com/problem/algorithm/sherlock-and-mind-palace-queries/

// Problem

// Magnussen - "No time for you to be a hero this time Mr. Holmes!"
// Sherlock-"Oh, do your research. I am not a hero. I am a high-functioning sociopath."

// Magnussen has been one of the worst rivals of Sherlock. He gives Sherlock T number of queries.
// For each query, Sherlock is provided a number N.
// He need to find

// = Number of Divisors of N

// PS- Largo I/O files. Use scanf/printf only

// Constraints-

// 1<=T<=106
// 1<=N<=107

// Input-
// First line contains T- the number of queries
// T lines follow. Each line has an integer N.

// Output-
// Print T lines, each line containing answer of corresponding F(N).
// Sample Input

// 3

// 1

// 2

// 4

// Sample Output

// 1

// 2

// 3

#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> omap; 

int countDivisors(int &n) {

    if (n == 1)
    {
        return 1;
    }

    int count = 0;

    for (int i = 1; i*i <= n;  ++i)
    {
        if (n%i == 0)
        {

            if (n/i == i)
            {
                count++;
            }else {

                count += 2;
            }
        }
    }

    return count;
}

int main() {

    int t;
    scanf("%d", &t);

    int n, res;

    while(t--) {

        scanf("%d", &n);

        if (omap.find(n) == omap.end())
        {
            res = countDivisors(n);
            omap[n] = res;
        }else {

            res = omap[n];
        }

        printf("%d\n", res);
    }
}
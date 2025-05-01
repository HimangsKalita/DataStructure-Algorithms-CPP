// https://codeforces.com/contest/327/problem/A

// A. Flipping Game
// time limit per test
// 1 second
// memory limit per test
// 256 megabytes

// Iahub got bored, so he invented a game to be played on paper.

// He writes n integers a1, a2, ..., an. Each of those integers can be either 0 or 1. He's allowed to do exactly one move: he chooses two indices i and j (1 ≤ i ≤ j ≤ n) and flips all values ak for which their positions are in range [i, j] (that is i ≤ k ≤ j). Flip the value of x means to apply operation x = 1 - x.

// The goal of the game is that after exactly one move to obtain the maximum number of ones. Write a program to solve the little game of Iahub.
// Input

// The first line of the input contains an integer n (1 ≤ n ≤ 100). In the second line of the input there are n integers: a1, a2, ..., an. It is guaranteed that each of those n values is either 0 or 1.
// Output

// Print an integer — the maximal number of 1s that can be obtained after exactly one move.
// Examples
// Input
// Copy

// 5
// 1 0 0 1 0

// Output
// Copy

// 4

// Input
// Copy

// 4
// 1 0 0 1

// Output
// Copy

// 4

// Note

// In the first case, flip the segment from 2 to 5 (i = 2, j = 5). That flip changes the sequence, it becomes: [1 1 1 0 1]. So, it contains four ones. There is no way to make the whole sequence equal to [1 1 1 1 1].

// In the second case, flipping only the second and the third element (i = 2, j = 3) will turn all numbers into 1.

#include <bits/stdc++.h>
using namespace std;

int maximumOnes(vector<int> &nums) {

    int n = nums.size();

    for (int i = 1; i < n; ++i)
    {
        nums[i] += nums[i-1];
    }

    int maxOnes = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j+i < n;  ++j)
        {
            int onesInside = (j>0) ? nums[j+i] - nums[j-1] : nums[j+i];
            int zeroes = (i+1) - onesInside;
            int onesOutSide = nums[n-1] - onesInside;

            int totalOnes = zeroes + onesOutSide;

            maxOnes = max(maxOnes, totalOnes);
        }

    }

    return maxOnes;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    vector<int> nums(n);

    for (int i = 0; i < n; ++i)
    {
        cin>>nums[i];
    }

    cout<<maximumOnes(nums)<<"\n";

    return 0;
}
// https://www.codechef.com/learn/course/recursion/LRECUR01/problems/RECUR02

// Sum of N Natural Numbers

// Let's suppose we are given an integer NN and we have to calculate the sum of first NN natural numbers. This problem can easily be broken down to smaller parts of the same nature.

// Assuming Sum(N)Sum(N) denotes the sum of first NN natural numbers, we can say
// Sum(5)=5+Sum(4)Sum(5)=5+Sum(4),
// which can be broken down further to say
// Sum(5)=5+4+Sum(3)Sum(5)=5+4+Sum(3)
// and so on.

// These broken down versions are generally called sub-problems. We break the task into sub-problems until the task becomes so small that the solution becomes trivial. Like in the above problem if we keep breaking this into smaller problems, it reaches 11, where
// Sum(1)=1Sum(1)=1.

// Thus the solution becomes trivial.
// From the above example, we can say that:
// Sum(N)=N+Sum(N−1)Sum(N)=N+Sum(N−1), until N>1N>1

#include <bits/stdc++.h>
using namespace std;

int sum(int n) {

    if(n == 1) {

        return 1;
    }
    
    return n + sum(n-1);
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    cout<<sum(n);

    return 0;
}
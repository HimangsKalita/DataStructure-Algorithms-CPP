// https://www.geeksforgeeks.org/problems/least-prime-factor5216/1

// Least Prime Factor
// Difficulty: EasyAccuracy: 51.45%Submissions: 36K+Points: 2Average Time: 10m

// Given a number N, find the least prime factors for all numbers from 1 to N.  The least prime factor of an integer X is the smallest prime number that divides it.
// Note :

//     1 needs to be printed for 1.
//     You need to return an array/vector/list of size N+1 and need to use 1-based indexing to store the answer for each number.

// Example 1:

// Input: N = 6
// Output: [0, 1, 2, 3, 2, 5, 2] 
// Explanation: least prime factor of 1 = 1,
// least prime factor of 2 = 2,
// least prime factor of 3 = 3,
// least prime factor of 4 = 2,
// least prime factor of 5 = 5,
// least prime factor of 6 = 2.
// So answer is[1, 2, 3, 2, 5, 2]. 

// Example 2:

// Input: N = 4
// Output: [0, 1, 2, 3, 2]
// Explanation: least prime factor of 1 = 1,
// least prime factor of 2 = 2,
// least prime factor of 3 = 3,
// least prime factor of 4 = 2.
// So answer is[1, 2, 3, 2]. 

// Your Task:  
// You don't need to read input or print anything. Complete the function leastPrimeFactor() which takes N as input parameter and returns a list of integers containing all the least prime factors of each number from 1 to N.

// Expected Time Complexity: O(NlogN)
// Expected Auxiliary Space: O(N)

// Constraints:
// 2<= n <=10^5

#include <bits/stdc++.h>
using namespace std;

vector<int> leastPrimeFactor(int n) {

    vector<int> ans(n+1);

    for(int i=0; i<=n; ++i) {

        ans[i] = i;
    }

    for(int i=2; i*i<=n; ++i) {

        if(ans[i] == i) {

            for(int j=i*i; j<=n; j+=i) {

                if(ans[j] == j) {

                    ans[j] = i;
                }
            }
        }

        if(i > 2) {

            ++i;
        }
    }

    return ans;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int> ans = leastPrimeFactor(n);

        for(const auto &value: ans)
        {
            cout<<value<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
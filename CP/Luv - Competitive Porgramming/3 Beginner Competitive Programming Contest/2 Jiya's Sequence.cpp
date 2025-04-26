// https://www.hackerearth.com/problem/algorithm/jiyas-sequence/

// Problem
// Jiya likes a sequence if all its elements when multiplied yields a number , whose least significant digit is either 2, 3 or 5.

// Given the number of  test case t.The first line of each test case is a number n.Next line contains n integers - A1,A2,......An.For each given test case tell whether the given sequence will be liked by Jiya.

// INPUT FORMAT-

// First line constains t number of test cases.

// Every test case has first line as the number of intergers the sequence contains, followed by sequence in the next line.

// OUTPUT FORMAT -

// Print "YES" or "NO",whether Jiya likes the sequence or not.

// CONSTRAINTS-

// 1≤t≤100

// 1≤n≤15

// 1≤Ai≤10, for all i

 

// HINT - Least significant digit of a number can be obtained by taking the number % 10.

// Mind the case of output to be printed.

// Sample Input
// 2
// 5
// 2 2 2 2 2
// 4
// 2 2 2 2
// Sample Output
// YES
// NO

// Time Limit: 1
// Memory Limit: 256
// Source Limit:
// Explanation
// For the first testcase,considering the sequence 2 2 2 2 2, when we multiply all the elements get 32 as the product.The least significant digit of 32 is 2 , so the string is liked by Jiya.

// For the second testcase,considering the sequence 2 2 2 2, when we multiply all the elements get 16 as the product.The least significant digit of 16 is 6 , so the string is not liked by Jiya.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        long long int mul = 1;

        while (n--)
        {   
            long long int num;
            cin>>num;
            mul = mul * num;
        }

        switch (mul%10)
        {
        case 2: cout<<"YES";
            break;
        
        case 3: cout<<"YES";
            break;

        case 5: cout<<"YES";
            break;
        
        default: cout<<"NO";
            break;
        }
        cout<<"\n";
    }
    
    return 0;
}
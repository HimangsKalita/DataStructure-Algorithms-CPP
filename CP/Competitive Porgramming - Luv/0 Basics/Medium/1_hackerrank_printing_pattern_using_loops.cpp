// https://www.hackerrank.com/challenges/printing-pattern-2/problem

// Print a pattern of numbers from to

// as shown below. Each of the numbers is separated by a single space.

//                             4 4 4 4 4 4 4  
//                             4 3 3 3 3 3 4   
//                             4 3 2 2 2 3 4   
//                             4 3 2 1 2 3 4   
//                             4 3 2 2 2 3 4   
//                             4 3 3 3 3 3 4   
//                             4 4 4 4 4 4 4   

// Input Format

// The input will contain a single integer

// .

// Constraints

// Sample Input 0

// 2

// Sample Output 0

// 2 2 2
// 2 1 2
// 2 2 2

// Sample Input 1

// 5

// Sample Output 1

// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5

// Sample Input 2

// 7

// Sample Output 2

// 7 7 7 7 7 7 7 7 7 7 7 7 7 
// 7 6 6 6 6 6 6 6 6 6 6 6 7 
// 7 6 5 5 5 5 5 5 5 5 5 6 7 
// 7 6 5 4 4 4 4 4 4 4 5 6 7 
// 7 6 5 4 3 3 3 3 3 4 5 6 7 
// 7 6 5 4 3 2 2 2 3 4 5 6 7 
// 7 6 5 4 3 2 1 2 3 4 5 6 7 
// 7 6 5 4 3 2 2 2 3 4 5 6 7 
// 7 6 5 4 3 3 3 3 3 4 5 6 7 
// 7 6 5 4 4 4 4 4 4 4 5 6 7 
// 7 6 5 5 5 5 5 5 5 5 5 6 7 
// 7 6 6 6 6 6 6 6 6 6 6 6 7 
// 7 7 7 7 7 7 7 7 7 7 7 7 7 

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;

    for (int i = -n+1; i < n; ++i)
    {
        for (int j = -n+1; j < n; ++j)
        {
            
            int max = std::max(abs(i), abs(j));
            cout<<max+1<<" ";
        }

        cout<<endl;
    }

    return 0;
}


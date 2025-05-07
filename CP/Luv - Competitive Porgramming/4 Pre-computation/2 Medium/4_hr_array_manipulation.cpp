// Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.

// Example

// n = 10

// queries = [[1,5,3], [4,8,7], [6,9,1]]

// Queries are interpreted as follows:

// a b k
// 1 5 3
// 4 8 7
// 6 9 1

// Add the values of k between the indices a and binclusive:


// The largest value is 10 after all operations are performed.

// after all operations are performed.

// Function Description

// Complete the function arrayManipulation

// with the following parameters:

// int n: the number of elements in the array
// int queries[q][3]: a two dimensional array of queries where each contains three integers, , , and

// .

// Returns

// int   : the maximum value in the resultant array

// Input Format

// The first line contains two space-separated integers
// and , the size of the array and the number of queries.
// Each of the next lines contains three space-separated integers , and

// , the left index, right index and number to add.

// Constraints

// 3<=n<=10^7
// 1<=m<=2*10^5
// 1<=a<=b<=n
// 0<=k<=10^9

// Sample Input

// STDIN       Function
// -----       --------
// 5 3         arr[] size n = 5, queries[] size q = 3
// 1 2 100     queries = [[1, 2, 100], [2, 5, 100], [3, 4, 100]]
// 2 5 100
// 3 4 100

// Sample Output

// 200

// Explanation

// After the first update the list is 100 100 0 0 0.
// After the second update list is 100 200 100 100 100.
// After the third update list is 100 200 200 200 100.

// The maximum value is 200
// . 

#include <bits/stdc++.h>
using namespace std;

vector<long long> arr(1e7+10);

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n, q;
    cin>>n>>q;

    while(q--){

        int a, b, k;
        cin>>a>>b>>k;

        arr[a] += k;
        arr[b+1] += -k;
    }

    for (int i = 1; i <= n; ++i)
    {
        arr[i] += arr[i-1];
    }

    long long max = INT_MIN;

    for (int i = 1; i <= n; ++i)
    {

        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    cout<<max<<"\n";

    return 0;
}
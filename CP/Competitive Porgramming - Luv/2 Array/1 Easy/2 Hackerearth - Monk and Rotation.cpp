//https://www.hackerearth.com/problem/algorithm/monk-and-rotation-3-bcf1aefe/

// Problem
// Monk loves to preform different operations on arrays, and so being the principal of Hackerearth School, he assigned a task to his new student Mishki. Mishki will be provided with an integer array A of size N and an integer K , where she needs to rotate the array in the right direction by K steps and then print the resultant array. As she is new to the school, please help her to complete the task.

// Video approach to solve this question: here

// Input:
// The first line will consists of one integer T denoting the number of test cases.
// For each test case:
// 1) The first line consists of two integers N and K, N being the number of elements in the array and K denotes the number of steps of rotation.
// 2) The next line consists of N space separated integers , denoting the elements of the array A.

// Output:
// Print the required array.

// Constraints:

// Sample Input
// 1
// 5 2
// 1 2 3 4 5

// Sample Output
// 4 5 1 2 3

#include <bits/stdc++.h>
using namespace std;
#define ll int long long
#define nl "\n"
#define fo(i,n) for(int i=0;i<n;i++)

void revereArray(int *arr,int firstIndex,int lastIndex){

    while (firstIndex < lastIndex)
    {
        swap(arr[firstIndex],arr[lastIndex]);

        firstIndex++;
        lastIndex--;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;

        k = k%n;

        int arr[n];

        fo(i,n) cin>>arr[i];

        revereArray(arr,0,n-k-1);
        revereArray(arr,n-k,n-1);
        revereArray(arr,0,n-1);

        fo(i,n) cout<<arr[i]<<" ";
        cout<<nl;

    }
    
    return 0;
}
// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1#

// Given an array, rotate the array by one position in clock-wise direction.

// Example 1:

// Input:
// N = 5
// A[] = {1, 2, 3, 4, 5}
// Output:
// 5 1 2 3 4

// Example 2:

// Input:
// N = 8
// A[] = {9, 8, 7, 6, 4, 2, 1, 3}
// Output:
// 3 9 8 7 6 4 2 1

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function rotate() which takes the array A[] and its size N as inputs and modify the array.
 

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1<=N<=105
// 0<=a[i]<=105

#include <bits/stdc++.h>
using namespace std;
#define ll int long long
#define nl "\n"
#define fo(i,n) for(int i=0;i<n;i++)

void rev(int *arr,int low,int high){
    
    while(low<high){
        
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[8] = {9, 8, 7, 6, 4, 2, 1, 3};

    int k = 8;

    int n = sizeof(arr)/sizeof(arr[0]);

    k = k % n;

    rev(arr,0,n - k - 1);
    rev(arr,n-k,n - 1);
    rev(arr,0,n - 1);
    
    for(int i=0; i< n;++i){
        cout<<arr[i]<<" ";
    }

    return 0;
}
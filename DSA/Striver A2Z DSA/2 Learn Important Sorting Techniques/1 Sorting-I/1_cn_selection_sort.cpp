// https://www.naukri.com/code360/problems/selection-sort_981162?leftPanelTabValue=SUBMISSION

// Problem statement

// Selection sort is one of the sorting algorithms that works by repeatedly finding the minimum element from the unsorted part of the array and putting it at the beginning of the unsorted region of the array.

// You are given an unsorted array consisting of N non-negative integers. Your task is to sort the array in non-decreasing order using the Selection Sort algorithm.
// For Example:

// Selection Sort implementation for the given array:  {29,72,98,13,87,66,52,51,36} is shown below :-

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:

// 1 <= T <= 100
// 1 <= N <= 100
// 1 <= Arr[i] <= 1000

// Where 'T' represents the number of test cases, 'N' represents the size of the array, and 'Arr[i]' represents the elements of the array.
// Time Limit: 1 sec

// Sample Input 1:

// 1
// 5
// 6 2 8 4 10

// Sample Output 1:

// 2 4 6 8 10

// Explanation :

// In the first step, the minimum element is 2. Thus it is swapped with the starting element of the unsorted region.
// In the second step, 4 is the minimum element. Now, it is swapped with the starting element of the unsorted region.
// Similarly, in the third step, the minimum element is 6, which is swapped accordingly.
// In the final step, all elements are arranged as per the non-decreasing order. Thus the array is sorted. 

// Sample Input 2:

// 2
// 2
// 1 2
// 4
// 4 3 2 1

// Sample Output 2:

// 1 2
// 1 2 3 4

// Time Complexity - O(N^2)

#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n - 1; ++i) {

        int minIndex = i;

        for(int j =i; j<n; ++j) {

            if(arr[minIndex] > arr[j]) {

                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    vector<int> arr(n);

    for (int i = 0; i < n;  ++i)
    {
        cin>>arr[i];
    }

    selectionSort(arr, n);

    for(const auto &val: arr)
    {
        cout<<val<<" ";
    }

    return 0;
}
// https://www.geeksforgeeks.org/problems/insertion-sort/1

// Insertion Sort
// Difficulty: EasyAccuracy: 66.61%Submissions: 229K+Points: 2Average Time: 15m

// The task is to complete the insertsort() function which is used to implement Insertion Sort.

// Examples:

// Input: arr[] = [4, 1, 3, 9, 7]
// Output: [1, 3, 4, 7, 9]
// Explanation: The sorted array will be [1, 3, 4, 7, 9].

// Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
// Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
// Explanation: The sorted array will be [1, 2, 3, 4, 5, 6, 7, 8, 9, 10].

// Input: arr[] = [4, 1, 9]
// Output: [1, 4, 9]
// Explanation: The sorted array will be [1, 4, 9].

// Constraints:
// 1 <= arr.size() <= 1000
// 1 <= arr[i] <= 1000

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr) {

    int n = arr.size();

    for (int i = 1; i < n; ++i)
    {
        int newElement = arr[i];

        int j = i;

        while(j >=0 && arr[j-1] > newElement){

            arr[j] = arr[j-1];
            j--;
        }

        arr[j] = newElement;
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

    insertion_sort(arr);

    for(const auto &val: arr)
    {
        cout<<val<<" ";   
    }

    return 0;
}
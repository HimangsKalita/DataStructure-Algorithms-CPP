// https://www.geeksforgeeks.org/problems/bubble-sort/1

// Bubble Sort
// Difficulty: EasyAccuracy: 59.33%Submissions: 290K+Points: 2Average Time: 15m

// Given an array, arr[]. Sort the array using bubble sort algorithm.

// Examples :

// Input: arr[] = [4, 1, 3, 9, 7]
// Output: [1, 3, 4, 7, 9]

// Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
// Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

// Input: arr[] = [1, 2, 3, 4, 5]
// Output: [1, 2, 3, 4, 5]
// Explanation: An array that is already sorted should remain unchanged after applying bubble sort.

// Constraints:
// 1 <= arr.size() <= 103
// 1 <= arr[i] <= 103

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &arr) {

    int n = arr.size();

    for (int i = 0; i < n - 1; ++i)
    {

        int didSwap = false;

        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);

                didSwap = true;
            }
        }

        if (!didSwap)
        {
            break;
        }
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

    bubble_sort(arr);

    for(const auto &val: arr)
    {
        cout<<val<<" ";   
    }

    return 0;
}
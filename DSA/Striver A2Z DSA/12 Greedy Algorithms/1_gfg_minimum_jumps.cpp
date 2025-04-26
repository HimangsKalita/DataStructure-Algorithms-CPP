// https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

// Minimum Jumps
// Difficulty: MediumAccuracy: 11.91%Submissions: 984K+Points: 4

// You are given an array arr[] of non-negative numbers. Each number tells you the maximum number of steps you can jump forward from that position.

// For example:

//     If arr[i] = 3, you can jump to index i + 1, i + 2, or i + 3 from position i.
//     If arr[i] = 0, you cannot jump forward from that position.

// Your task is to find the minimum number of jumps needed to move from the first position in the array to the last position.

// Note:  Return -1 if you can't reach the end of the array.

// Examples : 

// Input: arr[] = [1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9]
// Output: 3 
// Explanation: First jump from 1st element to 2nd element with value 3. From here we jump to 5th element with value 9, and from here we will jump to the last. 

// Input: arr = [1, 4, 3, 2, 6, 7]
// Output: 2 
// Explanation: First we jump from the 1st to 2nd element and then jump to the last element.

// Input: arr = [0, 10, 20]
// Output: -1
// Explanation: We cannot go anywhere from the 1st element.

// Constraints:
// 2 ≤ arr.size() ≤ 104
// 0 ≤ arr[i] ≤ 104

#include <bits/stdc++.h>
using namespace std;

int lastMaxOccurance(vector<int> &arr, int index) {

    int maxIndex = 0;
    int jumpRange = 0;

    // int end = index + arr[index];
    int end = std::min(index + arr[index], (int)arr.size() - 1);

    for (int i = index+1; i <= end; ++i)
    {
        if (arr[i] + i >= jumpRange)
        {
            jumpRange = arr[i] + i;
            maxIndex = i;
        }
    }

    cout<<maxIndex<<"\n";

    return maxIndex;
}

int minJumps(vector<int>& arr) {

    int n = arr.size();

    if (n == 1)
    {
        return 0;
    }

    if (arr[0] == 0) {

        return -1;
    }

    int jumps = 0;

    for (int i = 0; i < n - 1; )
    {
        if (arr[i] == 0)
        {
            return -1;
        }

        if (n-i-1 <= arr[i])
        {
            jumps = jumps + 1;
            break;
        }

        int maxElementIndex = lastMaxOccurance(arr, i);

        jumps++;

        // cout<<jumps<<" "<<maxElementIndex<<"\n";

        i = maxElementIndex;
    }

    return jumps;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int> arr(n);

        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }

        cout<<minJumps(arr)<<"\n";
    }

    return 0;
}


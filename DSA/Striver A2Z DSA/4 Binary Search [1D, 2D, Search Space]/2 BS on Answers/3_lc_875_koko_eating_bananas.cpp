// https://leetcode.com/problems/koko-eating-bananas/description/

// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.



// Example 1:

// Input: piles = [3,6,7,11], h = 8
// Output: 4

// Example 2:

// Input: piles = [30,11,23,4,20], h = 5
// Output: 30

// Example 3:

// Input: piles = [30,11,23,4,20], h = 6
// Output: 23



// Constraints:

//     1 <= piles.length <= 104
//     piles.length <= h <= 109
//     1 <= piles[i] <= 109

#include <bits/stdc++.h>
using namespace std;

// Brute force
// Time - O(n*max_element(arr))
// Space - O(1)

// int minEatingSpeed(vector<int>& piles, int h) {

//     int n = piles.size();

//     long long int speed;
//     int time;
//     int ans;

//     int maxElement = *max_element(piles.begin(), piles.end());

//     for (speed = 1; speed <= maxElement; ++speed)
//     {

//         time = 0;

//         for (int i = 0; i < n; ++i)
//         {
//             time += ceil(piles[i]/(speed*1.0));

//             if (time > h)
//             {
//                 break;
//             }
//         }

//         if (time <= h)
//         {
//             ans = speed;
//             break;
//         }

//     }

//     return ans;
// }

// Binary Search
// Time - O(n*max_element(arr))
// Space - O(1)

int minEatingSpeed(vector<int>& piles, int h) {

    int n = piles.size();
    
    int time;
    int ans;

    int left = 1;
    int right = *max_element(piles.begin(), piles.end());

    while (left <= right)
    {

        int mid = left + (right-left)/2;

        time = 0;

        for (int i = 0; i < n; ++i)
        {
            time += ceil(piles[i]/(mid*1.0));

            if (time > h)
            {
                break;
            }
        }

        if (time <= h)
        {
            ans = mid;
            right = mid-1;
        }else {

            left = mid+1;
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

        int n, h;
        cin>>n>>h;

        vector<int> arr(n);

        for (int i = 0; i < n;  ++i)
        {
            cin>>arr[i];
        }

        cout<<minEatingSpeed(arr, h)<<"\n";
    }

    return 0;
}
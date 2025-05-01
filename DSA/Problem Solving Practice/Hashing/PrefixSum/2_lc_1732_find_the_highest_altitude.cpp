// https://leetcode.com/problems/find-the-highest-altitude/description/

// There is a biker going on a road trip. The road trip consists of n + 1 points at different altitudes. The biker starts his trip on point 0 with altitude equal 0.

// You are given an integer array gain of length n where gain[i] is the net gain in altitude between points i​​​​​​ and i + 1 for all (0 <= i < n). Return the highest altitude of a point.



// Example 1:

// Input: gain = [-5,1,5,0,-7]
// Output: 1
// Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.

// Example 2:

// Input: gain = [-4,-3,-2,-1,4,3,2]
// Output: 0
// Explanation: The altitudes are [0,-4,-7,-9,-10,-6,-3,-1]. The highest is 0.



// Constraints:

//     n == gain.length
//     1 <= n <= 100
//     -100 <= gain[i] <= 100

#include <bits/stdc++.h>
using namespace std;

int largestAltitude(vector<int>& gain) {

    int n = gain.size();

    int maxGain = max(0, gain[0]);

    for(int i = 1; i < n; ++i) {

        gain[i] += gain[i-1];

        maxGain = max(maxGain, gain[i]);
    }

    return maxGain;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int> gain(n);

        for (int i = 0; i < n;  ++i)
        {
            cin>>gain[i];
        }

        cout<<largestAltitude(gain)<<"\n";
    }

    return 0;
}
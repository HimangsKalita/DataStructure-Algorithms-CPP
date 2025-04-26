// https://www.naukri.com/code360/problems/k-most-occurrent-numbers_625382?leftPanelTabValue=PROBLEM

//  Highest / Lowest Frequency Elements
// Moderate
// 80/80
// Average time to solve is 25m
// Contributed by
// 260 upvotes
// Asked in company
// Problem statement

// Given an array 'v' of 'n' numbers.


// Your task is to find and return the highest and lowest frequency elements.


// If there are multiple elements that have the highest frequency or lowest frequency, pick the smallest element.


// Example:

// Input: ‘n' = 6, 'v' = [1, 2, 3, 1, 1, 4]

// Output: 1 2

// Explanation: The element having the highest frequency is '1', and the frequency is 3. The elements with the lowest frequencies are '2', '3', and '4'. Since we need to pick the smallest element, we pick '2'. Hence we return [1, 2].

// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1 :

// 6
// 1 2 3 1 1 4

// Sample Output 1 :

// 1 2

// Sample Explanation 1:

// Input: ‘n' = 6, 'v' = [1, 2, 3, 1, 1, 4]

// Output: 1 2

// Explanation: The element having the highest frequency is '1', and the frequency is 3. The elements with the lowest frequencies are '2', '3', and '4'. Since we need to pick the smallest element, we pick '2'. Hence we return [1, 2].

// Sample Input 2 :

// 6
// 10 10 10 3 3 3

// Sample Output 2 :

// 3 3

// Sample Explanation 2:

// Input: ‘n' = 6, 'v' = [10, 10, 10, 3, 3, 3]

// Output: 3 3

// Explanation: Since the frequency of '3' and '10' is 3. Therefore, the element with the maximum and minimum frequency is '3'.

// Expected Time Complexity :

// The expected time complexity is O(n), where n is the size of the array.

// Expected Space Complexity :

// The expected time complexity is O(n), where n is the size of the array.

// Constraints :

// 2 <=  n <= 10^4
// 1 <= v[i] <= 10^9
// There are at least two distinct elements in the array.
// Time Limit: 1 sec 

#include <bits/stdc++.h>
using namespace std;

vector<int> getFrequencies(vector<int>& v) {

    unordered_map<int, int> elementsFreq;

    int n = v.size();

    for(int i=0;i<n;++i) {

        elementsFreq[v[i]]++;
    }

    int highestFreq = INT_MIN;
    int highestElement = INT_MAX;
    int lowestFreq = INT_MAX;
    int lowestElement = INT_MAX;

    auto it = elementsFreq.begin();
    for(auto it = elementsFreq.begin(); it != elementsFreq.end(); ++it) {

        if(it->second > 0) {

            if(it->second > highestFreq) {

                highestFreq = it->second;
                highestElement = it->first;
            }else if(it->second == highestFreq && it->first < highestElement) {

                highestElement = it->first;
            }

            if(it->second < lowestFreq) {

                lowestFreq = it->second;
                lowestElement = it->first;
            }else if(it->second == lowestFreq && it->first < lowestElement) {

                lowestElement = it->first;
            }
        }
    }

    return {highestElement, lowestElement};
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

        for (int i = 0; i < n;  ++i)
        {
            cin>>arr[i];
        }

        vector<int> ans = getFrequencies(arr);

        for(const auto &value: ans)
        {
            cout<<value<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
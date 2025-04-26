// https://www.hackerrank.com/contests/second/challenges/next-greater-element/problem

// Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in array. Elements for which no greater element exist, consider next greater element as -1.

// For the input array [4, 5, 2, 25}, the next greater elements for each element are as follows.

// Element --> NGE

// 4 --> 5

// 5 --> 25

// 2 --> 25

// 25 --> -1

// For the input array [13, 7, 6, 12}, the next greater elements for each element are as follows.

// Element --> NGE

// 13 --> -1

// 7 --> 12

// 6 --> 12

// 12 --> -1

// Input Format

// The first line of input contains an integer n denoting the size of the array

// The next line contains n space seperated array elements in integer range

// 0 < n < = 65535

// Output Format

// Output consists of n lines

// Each line should contain 2 space seperated integers

// The first integer should represent the array element and second integer should represent the next greater element

// Sample Input

// 4

// 4 5 2 25

// Sample Output

// 4 5

// 5 25

// 2 25

// 25 -1

#include <bits/stdc++.h>

using namespace std;

vector<int> NGE(vector<int> &arr) {

    int n=arr.size();
    
    vector<int> res(n);
    stack<int> st;
    
    for (int i = 0; i < n; ++i)
    {
        while(!st.empty() && arr[i] > st.top()){

            res[i] = arr[i];
        }

        st.push(arr[i]);
    }

    while(!st.empty()){
        
        st.pop();
    }
    
    return res;
}

int main() {

    int n;
    cin>>n;
    
    vector<int> arr(n);
    
    for(int i =0;i<n;++i) {

        cin>>arr[i];
    }
    
    vector<int> ans = NGE(arr);
    
    for(int i=0;i<n;++i) {

        cout<<arr[i]<<" "<<(ans[i] == -1 ? -1 : arr[ans[i]])<<"\n";
    }
    
    return 0;
}


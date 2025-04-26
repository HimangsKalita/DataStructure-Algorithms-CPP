
// Sum of Array

#include <bits/stdc++.h>
using namespace std;

int sumOfArray(vector<int> &arr, int n) {

    if (n == -1)
    {
        return 0;
    }

    return arr[n] + sumOfArray(arr, n-1);
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

    cout<<sumOfArray(arr, n-1)<<"\n";

    return 0;
}
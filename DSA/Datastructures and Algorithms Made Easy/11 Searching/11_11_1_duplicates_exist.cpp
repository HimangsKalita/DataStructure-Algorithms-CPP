#include <bits/stdc++.h>
using namespace std;

bool isDuplicate(vector<int> &arr, int n) {

    for (int i = 0; i < n; ++i)
    {
        for (int j = i+1; j < n; ++j)
        {
            if (arr[i] == arr[j])
            {
                return true;
            }
        }
    }

    return false;
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

    cout<<isDuplicate(arr, n);

    return 0;
}


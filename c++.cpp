#include <bits/stdc++.h>
using namespace std;

bool isPairSum(vector<int> &arr, int k) {

    int n = arr.size();

    unordered_set<int> eleFreq;

    for (int i = 0; i < n; ++i)
    {
        int missingEle = k - arr[i];

        if (eleFreq.find(missingEle) != eleFreq.end())
        {
            return true;
        }

        eleFreq.insert(arr[i]);
    }

    return false;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n, k;
        cin>>n>>k;

        vector<int> arr(n);

        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }

        if (isPairSum(arr, k))
        {
            cout<<"YES";
        }else {

            cout<<"NO";
        }
    }

    return 0;
}
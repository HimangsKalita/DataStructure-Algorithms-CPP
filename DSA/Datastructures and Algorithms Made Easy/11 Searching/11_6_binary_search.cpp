// 302 - Binary Search Implementations

#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &arr, int ele) {

    int n = arr.size();

    int low = 0;
    int high = n-1;
    int mid;

    while (low <= high)
    {
        mid = low + (high-low)/2;

        if (ele == arr[mid])
        {
            return mid;
        }else if (ele < arr[mid])
        {
            high = mid - 1;
        }else{

            low = mid + 1;
        }
    }

    return -1;
}

int binary_search_recrusion(vector<int> &arr, int high, int low, int ele) {

    if (low > high)
    {
        return -1;
    }

    int mid = low + (high - low)/2;

    if (arr[mid] == ele)
    {
        return mid;
    }else if (ele < arr[mid]) {

        high = mid - 1;
        return binary_search_recrusion(arr, high, low, ele);
    }else {

        low = mid + 1;
        return binary_search_recrusion(arr, high, low, ele);
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

    int x;
    cin>>x;

    cout<<binary_search(arr, x);

    return 0;
}


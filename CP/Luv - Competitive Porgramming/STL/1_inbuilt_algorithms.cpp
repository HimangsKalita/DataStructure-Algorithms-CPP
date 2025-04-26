#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    // All algorithms O(n) except maps and sets where O(logN)

    // For Vectors

    vector<int> v(n);

    for (int i = 0; i < n;  ++i)
    {
        cin>>v[i];
    }

    cout<<*min_element(v.begin() + 1, v.end())<<"\n";

    cout<<*max_element(v.begin(), v.end() - 3)<<"\n";

    cout<<accumulate(v.begin(), v.end(), 0)<<"\n";
    cout<<accumulate(v.begin(), v.end(), 10)<<"\n";

    cout<<count(v.begin() ,v.end(), 4)<<"\n";
    cout<<count(v.begin() + 3,v.end(), 2)<<"\n";

    auto it = find(v.begin(), v.end(), 3);

    if (it != v.end())
    {
        cout<<*it<<"\n";
    }else{

        cout<<"Element not found"<<"\n";
    }

    auto it2 = find(v.begin(), v.end(), 11);

    if (it2 != v.end())
    {
        cout<<*it2<<"\n";
    }else{

        cout<<"Element not found"<<"\n";
    }

    vector<int> v2 (v.begin(), v.end());

    reverse(v2.begin(), v2.end());

    for (int i = 0; i < n;  ++i)
    {
        cout<<v2[i]<<" ";
    }
    cout<<"\n";

    vector<int> v3 (v.begin(), v.end());

    reverse(v3.begin() + 2, v3.end());

    for (int i = 0; i < n;  ++i)
    {
        cout<<v3[i]<<" ";
    }
    cout<<"\n";

    string name = "Himangshu";

    reverse(name.begin(), name.end());
    cout<<name<<"\n";

    string name2 = "Kalita";

    reverse(name2.begin() + 3, name2.end());
    cout<<name2<<"\n"; 

    cout<<"\n";

    // For Array

    int arr[n];

    for (int i = 0; i < n;  ++i)
    {
        cin>>arr[i];
    }

    cout<<*min_element(arr+1, arr+n)<<"\n";

    cout<<*max_element(arr, arr+n - 3)<<"\n";

    cout<<accumulate(arr, arr+n, 0)<<"\n";
    cout<<accumulate(arr, arr+n, 10)<<"\n";

    cout<<count(arr, arr+n, 4)<<"\n";
    cout<<count(arr+3, arr+n, 2)<<"\n";

    auto it3 = find(arr, arr+n, 3);

    if (it3 != arr+n)
    {
        cout<<*it3<<"\n";
    }else{

        cout<<"Element not found"<<"\n";
    }

    auto it4 = find(arr, arr+n, 11);

    if (it4 != arr+n)
    {
        cout<<*it4<<"\n";
    }else{

        cout<<"Element not found"<<"\n";
    }

    int arr2[n];
    memcpy(arr2, arr, n);

    reverse(arr, arr+n);

    for (int i = 0; i < n;  ++i)
    {
        cout<<v2[i]<<" ";
    }
    cout<<"\n";

    int arr3[n];
    memcpy(arr3, arr, n);

    reverse(arr + 3, arr+n);

    for (int i = 0; i < n;  ++i)
    {
        cout<<v3[i]<<" ";
    }

    return 0;
}
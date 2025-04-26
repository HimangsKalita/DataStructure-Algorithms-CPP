// Sort an array using Recursion

#include <bits/stdc++.h>
using namespace std;

// sorted function could be simple using for loop

void sorted(vector<int> &arr, int lastElement) {

    if (arr.size() == 0 || arr.back() <= lastElement)
    {
        arr.push_back(lastElement);
        return ;
    }

    int temp = arr.back();
    arr.pop_back();

    sorted(arr, lastElement);

    arr.push_back(temp);
}

void sortArray(vector<int> &arr) {

    if (arr.size() <= 1)
    {
        return ;
    }

    int lastElement = arr.back();

    arr.pop_back();

    sortArray(arr);

    sorted(arr, lastElement);
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

    sortArray(arr);

    for(const int &value: arr)
    {
        cout<<value<<" ";
    }

    return 0;
}
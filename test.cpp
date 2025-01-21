#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b) {

    int sum = a+b;

    return sum;

}

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int arrSize = 5;

    vector<int> nums(5);

    for (int i = 0; i < arrSize; ++i)
    {
        cin>>nums[i];
    }

    for (int i = 0; i < arrSize; ++i)
    {
        cout<<nums[i];
    }


    return 0;
}


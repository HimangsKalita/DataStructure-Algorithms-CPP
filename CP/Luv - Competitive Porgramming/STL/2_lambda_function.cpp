#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    vector<int> v = {5, 10, 25};

    // Return false(0) even if one condition is false

    cout<<all_of(v.begin(), v.end(), [](int x) {return x % 5 == 0;})<<"\n";

    // Return true(1) if any one condition is true

    cout<<any_of(v.begin(), v.end(), [](int x) {return x%2 == 0;})<<"\n";

    // Return true(1) if all the condition doesn't match

    cout<<none_of(v.begin(), v.end(), [](int x) {return x%2 == 0;})<<"\n";

    return 0;
}
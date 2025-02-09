#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;

    for (int i = 0; i < 2*n; ++i)
    {

        if (i<n)
        {
            for (int j = 0; j < n-i-1; ++j)
            {
                cout<<" ";
            }

            for (int j = 0; j < (2*i) + 1; ++j)
            {
                cout<<"*";
            }
        }else {

            for (int j = n; j < i; ++j)
            {
                cout<<" ";
            }

            for (int j = 0; j < 2*(2*n-1-i) + 1; ++j)
            {
                cout<<"*";
            }
        }

        cout<<endl;
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int t;
    cin>>t;

    if (1>t || t>100)
    {
        return 0;
    }

    while(t--){

        int n;
        cin>>n;

        if (1 > n || n > 30)
        {
            return 0;
        }

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 0, k=n-i; j < 2*n; ++j, ++k)
            {
                if (j < i || j >= 2*n-i)
                {
                    cout<<"*";
                }else
                {
                    cout<<"#";
                }
                
            }

            cout<<endl;
        }

        cout<<endl;

    }

    return 0;
}
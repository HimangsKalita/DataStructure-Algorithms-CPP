// Print Numbers from 1 to N 
// For n = 5
// O/P - 1, 2, 3, 4, 5

#include <bits/stdc++.h>
using namespace std;

void print1ToN(int n) {

    if (n == 1)
    {
        cout<<1<<"\n";

        return ;
    }

    print1ToN(n-1);
    
    cout<<n<<"\n";
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    print1ToN(n);

    return 0;
}
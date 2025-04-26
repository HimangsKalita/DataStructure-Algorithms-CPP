// Print Numbers from N to 1
// For n = 5
// O/P - 5, 4, 3, 2, 1

#include <bits/stdc++.h>
using namespace std;

void printNTo1(int n) {

    if (n == 1)
    {
        cout<<1<<"\n";

        return ;
    }

    cout<<n<<"\n";

    printNTo1(n-1);
    
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    printNTo1(n);

    return 0;
}
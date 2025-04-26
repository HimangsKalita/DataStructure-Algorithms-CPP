#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void print() {

    if(cnt == 3) {

        return ;
    }

    cout<<cnt<<"\n";
    cnt++;

    print();
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    print();

    return 0;
}
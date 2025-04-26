//Reverse stack

#include <bits/stdc++.h>
using namespace std;

void insertElementAtLast(stack<int> &st, int topElement) {

    if (st.empty())
    {
        st.push(topElement);
        return ;
    }

    int element = st.top();

    st.pop();

    insertElementAtLast(st, topElement);

    st.push(element);
}

void reverseStack(stack<int> &st) {

    if (st.size() == 1) {

        return ;
    }

    int topElement = st.top();

    st.pop();

    reverseStack(st);

    insertElementAtLast(st, topElement);
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int n;
    cin>>n;

    stack<int> st; 

    for (int i = 0; i < n;  ++i)
    {
        int x;
        cin>>x;

        st.push(x);
    }


    reverseStack(st);

    while(!st.empty()){

        cout<<st.top()<<"\n";
        st.pop();
    }

    return 0;
}
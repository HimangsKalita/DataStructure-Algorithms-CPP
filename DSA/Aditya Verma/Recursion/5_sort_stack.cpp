// Sort a stack

#include <bits/stdc++.h>
using namespace std;

void insertElement(stack<int> &st, int topElement) {

    if (st.empty() || st.top() < topElement)
    {
        st.push(topElement);
        return ;
    }

    int tempTopElement = st.top();
    st.pop();

    insertElement(st, topElement);

    st.push(tempTopElement);
}

void stackSort(stack<int> &st) {

    if (st.empty())
    {
        return ;
    }

    int topElement = st.top();

    st.pop();

    stackSort(st);

    insertElement(st, topElement);
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

    stackSort(st);

    while(!st.empty()){

        cout<<st.top()<<"\n";
        st.pop();
    }

    return 0;
}
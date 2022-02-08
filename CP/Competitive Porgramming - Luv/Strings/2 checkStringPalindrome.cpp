//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str1;
    cin>>str1;

    int flag = 0;

    for (int i = 0; i <= str1.size()/2; i++)
    {
        if (str1[i] != str1[str1.size() - 1 - i])
        {
            flag++;
        }
    }

    if (flag==0)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
    
    

    return 0;
}
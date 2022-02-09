//https://www.codechef.com/problems/STONES

// Input
// First line contains an integer T denoting the number of test cases. Then follow T test cases. Each test case consists of two lines, each of which contains a string composed of English lower case and upper characters. First of these is the jewel string J and the second one is stone string S.
// You can assume that 1 <= T <= 100, 1 <= |J|, |S| <= 100

// Output
// Output for each test case, a single integer, the number of jewels mined.

// Example
// Input:
// 4
// abc
// abcdef
// aA
// abAZ
// aaa
// a
// what
// none

// Output:
// 3
// 2
// 1
// 0

#include <bits/stdc++.h>
using namespace std;
#define ll int long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    cin.ignore();

    while (t--)
    {
        string jewel,stones;
        getline(cin,jewel);
        getline(cin,stones);

        int mined = 0;

        for (int i = 0; i < stones.length(); i++)
        {
            for (int j = 0; j < jewel.length(); j++)
            {
                if (stones[i] == jewel[j])
                {
                    mined++;
                    break;
                }
                
            }
            
        }
        

        cout<<mined<<nl;
    }
    
    
    return 0;
}

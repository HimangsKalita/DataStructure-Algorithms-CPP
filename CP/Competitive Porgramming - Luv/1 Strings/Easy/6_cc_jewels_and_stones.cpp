// https://www.codechef.com/problems/STONES

// Jewels and Stones

// Soma is a fashionable girl. She absolutely loves shiny stones that she can put on as jewellery accessories. She has been collecting stones since her childhood - now she has become really good with identifying which ones are fake and which ones are not. Her King requested for her help in mining precious stones, so she has told him which all stones are jewels and which are not. Given her description, your task is to count the number of jewel stones.

// More formally, you're given a string J composed of latin characters where each character is a jewel. You're also given a string S composed of latin characters where each character is a mined stone. You have to find out how many characters of S are in J as well.

// Input

// First line contains an integer T denoting the number of test cases. Then follow T test cases. Each test case consists of two lines, each of which contains a string composed of English lower case and upper characters. First of these is the jewel string J and the second one is stone string S. You can assume that 1 <= T <= 100, 1 <= |J|, |S| <= 100
// Output

// Output for each test case, a single integer, the number of jewels mined.
// Sample 1:
// Input
// Output

// 4
// abc
// abcdef
// aA
// abAZ
// aaa
// a
// what
// none

// 3
// 2
// 1
// 0

// More Info
// Time limit0.5 secs
// Memory limit1.5 GB
// Source Limit50000 Bytes

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        string jewel, stone;
        cin>>jewel>>stone;

        int latin[52] = {0};

        for (int i = 0; i < jewel.size(); ++i)
        {
            if ((int)jewel[i] <= 90)
            {
                latin[(jewel[i] - 'A') + 26] = -1;
            }else
            {
                latin[jewel[i] - 'a'] = -1;
            }
        }

        int count = 0;

        for (int i = 0; i < stone.size(); ++i)
        {
            if ((int)stone[i] <= 90)
            {
                if (latin[(stone[i] - 'A') + 26] == -1)
                {
                    count++;
                }
            }else
            {
                if (latin[(stone[i] - 'a')] == -1)
                {
                    count++;
                }
            }
        }

        cout<<count<<endl;
    }

    return 0;
}


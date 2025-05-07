// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/little-jhool-and-the-magical-jewels/

// Little Jhool and the Magical Jewels
// 11224
// 82%
// 20
// ★★★★★

// 2.9
// 36 votes
// Approved, Basic Programming, Easy, Hash Maps, Open
// Share
// Details
// Submissions
// Discussion
// Similar Problems
// Editorial
// Problem

// Little Jhool is still out of his mind - exploring all his happy childhood memories. And one of his favorite memory is when he found a magical ghost, who promised to fulfill one of Little Jhool's wish.

// Now, Little Jhool was a kid back then, and so he failed to understand what all could he have asked for from the ghost. So, he ends up asking him something very simple. (He had the intuition that he'd grow up to be a great Mathematician, and a Ruby programmer, alas!) He asked the ghost the power to join a set of *the letters r, u, b and y * into a real ruby. And the ghost, though surprised, granted Little Jhool his wish...

// Though he regrets asking for such a lame wish now, but he can still generate a lot of real jewels when he's given a string. You just need to tell him, given a string, how many rubies can he generate from it?

// Input Format:
// The first line contains a number t - denoting the number of test cases.
// The next line contains a string.

// Output Format:
// Print the maximum number of ruby(ies) he can generate from the given string.

// Constraints:
// 1 ≤ t ≤ 100
// 1 ≤ Length of the string ≤ 100
// Sample Input

// 2
// rrrruubbbyy
// rubrubrubrubrubrubrubrubrubrubrubrubrubrb

// Sample Output

// 2
// 0

#include <bits/stdc++.h>
using namespace std;

int maxRubies(string &str) {

    vector<int> charFreq(4, 0);

    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == 'r')
        {
            charFreq[0]++;
        }else if (str[i] == 'u')
        {
            charFreq[1]++;
        }else if (str[i] == 'b')
        {
            charFreq[2]++;
        }else if (str[i] == 'y')
        {
            charFreq[3]++;
        }
    }

    int minFreq = INT_MAX;

    for (int i = 0; i < 4; ++i)
    {
        if (charFreq[i] < minFreq)
        {
            minFreq = charFreq[i];
        }
    }

    return minFreq;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        string str;
        cin>>str;

        cout<<maxRubies(str)<<"\n";
    }

    return 0;
}
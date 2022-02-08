// https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/caesars-cipher-1/

// Caesar's Cipher is a very famous encryption technique used in cryptography. It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet. For example, with a shift of 3, D would be replaced by G, E would become H, X would become A and so on.

// Encryption of a letter X by a shift K can be described mathematically as  % .

// Given a plaintext and it's corresponding ciphertext, output the minimum non-negative value of shift that was used to encrypt the plaintext or else output -1 if it is not possible to obtain the given ciphertext from the given plaintext using Caesar's Cipher technique.

// Input:

// The first line of the input contains Q, denoting the number of queries.

// The next Q lines contain two strings S and T consisting of only upper-case letters.

// Output:

// For each test-case, output a single non-negative integer denoting the minimum value of shift that was used to encrypt the plaintext or else print -1 if the answer doesn't exist.

// sample input
// 5
// GX
// PU
// MKXKSZH
// BPPHYKI
// KEZPLVFJ
// QMOPODOT
// RJZRIML
// LDTLCGF
// U
// R

// sample output
// -1
// -1
// -1
// 20
// 23

#include <bits/stdc++.h>
using namespace std;
#define ll int long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    while (q--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        // constant to check against all cases don't have to do the calculations again
        int cons = (s2[0] - s1[0] + 26) % 26, flag = 1; // + 26 is added to cycle back to start and make negative -> positive

        for (int i = 1; i < s1.size(); ++i)
        {
            if ((s2[i] - s1[i] + 26) % 26 != cons)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            cout << cons << "\n";
        }
        else
        {
            cout << "-1"
                 << "\n";
        }
    }

    return 0;
}
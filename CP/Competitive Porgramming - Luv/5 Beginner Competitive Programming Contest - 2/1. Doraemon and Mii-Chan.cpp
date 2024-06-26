// https://www.hackerearth.com/problem/algorithm/doraemon-and-mii-chan/

// Problem
// Doraemon wants to meet Mii-Chan,his best friend.  But Inorder to meet her, he has to cross N Doors which are all locked and have numbers written on them  (The numbers need not to be from 1 to N).

// Doraemon makes use of his Gadget which generates a total of M Keys ( For each key generated, it also shows the lock it can open).  Surprisingly this gadget can generate such keys that can open more than one lock, with the information what number door it opens.

// Each of the M queries only maps a  key to a lock, i.e. why a key may be mentioned many times.

// The next line contains the sequence of total N door locks Doraemon has to cross to reach Mii-Chan.

// So, now you need to determine whether he is able to open all locked doors with the keys generated by the gadget and meet Mii-Chan or not.

// Print 'YES' if Doraemon's gadget is able to generate keys that unlocks all the doors else print 'NO'.

// Input:

// First Line of Each Test contains 2 integers M and N,

// where M is the number of keys the gadget generates

// and N is the total number of locked doors Doraemon has to cross to meet Mii-Chan.

// Next M lines each contain two integers, which are, the keys and the lock this key can open.

// Next, Line contains the N space-separated Lock Values.

// Output:

// Print 'YES' if Doraemon's gadget is able to generate Keys that unlocks all the locks else print 'NO'.

// Constraints:

// 1<=N<=10^5

// 1<=M<=10^5

// Lock number values <= 10^5

// Keys values <= 10^5

 

// Sample Input
// 3 4
// 1 2
// 1 3
// 2 3
// 1 2 3 4

// Sample Output
// NO


#include <bits/stdc++.h>
using namespace std;
#define ll int long long
#define nl "\n"
#define fo(i,n) for(int i=0;i<n;i++)
const int N = 1e5+10;
int hsh[N];
// template<typename T, std::size_t N, std::size_t M>
// void increment_2D(T (&a)[N][M])
// {
//     for(std::size_t n = 0; n < N; ++n)
//         for(std::size_t m = 0; m < M; ++m)
//             ++a[n][m];
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m,n;
    cin>>m>>n;

    while (m--)
    {
        int key,unlockDoor;
        cin>>key>>unlockDoor;

        hsh[unlockDoor]++;
    }

    int flag = 1;

    for (int i = 0; i < n; ++i)
    {
        int val;
        cin>>val;

        if (hsh[val] == 0)
        {
            flag = 0;
        }
        
    }
    
    if (flag)
    {
        cout<<"YES"<<nl;
    }else
    {
        cout<<"NO"<<nl;
    }
    
    return 0;
}
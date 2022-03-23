// https://www.hackerearth.com/problem/algorithm/borrow-robo/

// Problem
// Long time ago, in a Galaxy far, far away....A Robotic civilisation lived with Population "N" who used to trade using a currency called "Robo". A Strange thing about this currency is that it can not be broken down and has a fixed value. Like if a Robo is worth 25 value than it cannot be broken down to something like 10,15 of value. If you possess a Robo worth 25 value, than you can only purchase an item worth 25 value with it & purchasing something worth 15 value is impossible with that Robo. Each Robot in the civilisation possess only one Robo worth a particular value as per the rule.

// You are given an Integer N>0 which represents the Population of the civilisation & N space seperated integers A[i] , 1 ≤ i ≤ N which represents the value of the Robo possessed by the ith Robot.

// A Giant Spaceship is for sale in the Ship Expo & it has a Sale Price worth 'price'. One Robot wants to buy the spaceship but don't have the Robo exactly worth of 'price'. As the sale is for a short time, he can borrow Robo from only one robot of the civilisation due to short time to have Robo worth of 'price'. Help him to know that from how many Robots can he borrow the Robo so that he can buy the Space Ship of his dreams. If he already have a Robo worth of 'price', than he don't need to borrow, simply print '0' in that case. If he can't buy the Space Ship from in any way, than print -1. See the Sample Test case for more clearity.

// You are given Q>0 queries. In each query you are given two integers, i & price , where 'i' represents the index of the Robot who wants to buy the spaceship & 'price' represents the price of the Space Ship. Output the number of Robots from which he can borrow Robo to buy the Space Ship or -1 if he can't buy it. Note : All Queries are independent of each other.

// INPUT
// First line of the Input will consist of a single integer N representing the population, followed by N space separated integers A[i] representing the value of the Robo possessed by ith Robot. Next line inputs Q, the number of queries. Each query inputs two integers i & price.

// OUTPUT
// For each query, print the number of robots from which the Robo can be borrowed or -1 when he cannot buy the Space Ship in a new line.

// CONSTRAINTS
// 1 ≤ N ≤ 105
// 1 ≤ A[i] ≤ 105
// 1 ≤ Q ≤ 105
// 1 ≤ i ≤ N
// 1 ≤ price ≤ 2*105
 

 

 

// Sample Input
// 6
// 1 3 3 6 4 6
// 4
// 1 4
// 4 3
// 4 6
// 1 2
// Sample Output
// 3
// 2
// 0
// -1

// Explanation
// Query 1 : i=1,price=4 : i=1 person own a Robo worth value=1. He wants one Robo worth value=3 (as he already have Robo worth value=1, so another Robo worth value=3 can make the sum=4) or 1 Robo worth value=4 (as getting a Robo worth value=4 itself make up the price=4) to pay the price of 4. So, he can borrow from one person who have Robo of worth value=3 or value=4. i=2 & i=3 owns Robo worth value=3 and i=4 owns Robo worth value=4. Hence, there are three people in the civilisation from which he can borrow the Robo to pay the price=4.
// Query 2 : i=4,price=3 : i=4 robot owns a Robo worth value=6 but he only wants Robo worth value=3. Hence, he can borrow from one person who has Robo worth value=3. There are two such robots in the civilisation i.e. i=2 & i=3.
// Query 3 : i=4,price=6 : As the i=4 robot already owns a Robo worth value=6. So, he doesn't need to borrow from anyone. Hence, the answer=0 for this Query.
// Query 4 : i=1,prcie=2 : There is no way such that the robot at i=1 can make up the price=2 by borrowing from a single robot in the Civilisation. Hence, answer=-1 for this Query.

#include <bits/stdc++.h>
using namespace std;
#define ll int long long
#define nl "\n"
#define fo(i,n) for(int i=0;i<n;i++)
const int N = 1e5+10;
int A[N];
int hsh[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int A[n];

    for (int i = 1; i <= n; ++i)
    {
        cin>>A[i];
        hsh[A[i]]++;
    }
    
    int q;
    cin>>q;

    while (q--)
    {
        int i,price,count = 0;
        cin>>i>>price;

        if (A[i] == price)
        {
            cout<<"0"<<nl;
            continue;
        }

        hsh[A[i]]--;
        
        if (A[i]>price)
        {
            cout<<((hsh[price] == 0) ? -1 : hsh[price])<<nl;
        }else
        {
            int req = price - A[i];
            if(hsh[req] == 0 && hsh[price] == 0 ) cout<<"-1"<<nl;
            else cout<<hsh[req]+hsh[price]<<nl;
        }
        
        hsh[A[i]]++;
    }
    
    return 0;
}
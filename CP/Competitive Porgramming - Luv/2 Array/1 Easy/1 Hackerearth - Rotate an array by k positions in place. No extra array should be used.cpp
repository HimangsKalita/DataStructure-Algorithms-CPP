// https://www.hackerearth.com/problem/algorithm/rotate-an-array-by-k-positions-in-place-no-extra-array-should-be-used/

// Problem
// rotate array anti clock wise by given position.

// **Your Algo check manually by mentors . please make sure your algo full fill question conditions .

// INPUT: First line No of Test Case T. then T test Case. First given no of Element of array. Then Element Of array. then Value Of D(Rotation Point) .

// Output: Rotated Array.

// Sample Input
// 2
// 7
// 1 2 3 4 5 6 7
// 2
// 5
// 3 5 1 7 8
// 3

// Sample Output
// 3 4 5 6 7 1 2
// 7 8 3 5 1

#include <bits/stdc++.h>
using namespace std;
#define ll int long long
#define nl "\n"
#define fo(i,n) for(int i=0;i<n;i++)

int gcd(int a,int b){
    
    if (b == 0)
    {
        return a;
    }else
    {
        return gcd(b, a%b);
    }  
}

void leftRotate(int arr[], int k, int n)
{
    k = k % n;
    int g_c_d = gcd(n, k);
    for (int i = 0; i < g_c_d; i++) {

        int temp = arr[i];
        int j = i;
 
        while (true) {

            int d = (j + k)%n;
 
            if (d == i)
                break;
 
            arr[j] = arr[d];
            j = d;
        }
        arr[j] = temp;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        int arr[n];

        fo(i,n) cin>>arr[i];
        
        int k;
        cin>>k;

        leftRotate(arr,k,n);

        fo(i,n) cout<<arr[i]<<" ";
        cout<<nl;
    }
    
    return 0;
}
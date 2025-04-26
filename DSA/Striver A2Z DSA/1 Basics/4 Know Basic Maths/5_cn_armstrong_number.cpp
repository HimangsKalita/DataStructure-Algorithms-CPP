// https://www.naukri.com/code360/problems/armstrong-number_1462443?leftPanelTabValue=PROBLEM

//  Problem statement

// You are given an integer ‘NUM’ . Your task is to find out whether this number is an Armstrong number or not.

// A k-digit number ‘NUM’ is an Armstrong number if and only if the k-th power of each digit sums to ‘NUM’.
// Example

// 153 = 1^3 + 5^3 + 3^3.

// Therefore 153 is an Armstrong number.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:

// 1 <= ‘T’ <= 100
// 1 <= ‘N’ <= 10^9

// Time Limit: 1 sec

// Sample Input 1:

// 1
// 13

// Sample Output 1:

// NO

// Explanation For Sample Input 1:

// As 1^2 + 3^2 = 10 which is not equal to 13.So we can say it is not an Armstrong number.

// Sample Input 2:

// 1
// 371

// Sample Output 2:

// YES

#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int num) {

    if(num < 0) {

        return false;
    }

    long long ans = 0;

    int temp = num;

    int digits = 0;

    while(temp > 0) {

        digits++;

        temp /= 10;
    }

    temp = num;

    while(temp > 0){

        int rem = temp %10;


        ans += pow(rem, digits);

        temp /= 10;

    }

    return ans == num;
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin>>n;

        cout<<isArmstrong(n)<<"\n";
    }

    return 0;
}


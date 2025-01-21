// https://www.naukri.com/code360/problems/day-of-the-week_668910?topList=45-day-coding-challenge&problemListRedirection=true&count=25&page=2&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&customSource=studio_nav

// Day of the Week 
//  Problem statement

// Write a function that calculates the corresponding day of the week for any particular date in the past or future.

// For example, for the date 28th August 2020 happens to be Friday. Hence the expected output will be Friday.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :

// 1 <= T <= 10 ^ 5
// 1 <= Day <= 31
// 1 <= Month <= 12
// 1 <= Year <= 2,000,000

// Time Limit : 1 sec.

// Sample Input 1 :

// 4
// 28 8 2020
// 20 4 2033
// 29 2 1920
// 27 4 1999

// Sample Output 1 :

// Friday
// Wednesday
// Sunday
// Tuesday

// Explanation to Sample Input 1 :

// It's Friday on 28th August 2020
// It's Wednesday on 20th April 2033
// It's Sunday on 29th February 1920
// It's Tuesday on 27th April 1999

// Sample Input 2:

// 1
// 28 2 1994

// Sample Output 2 :

// Monday

// Explanation to Sample Input 2 :

// It's Monday on 28th February 1994

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int day, month, year;
        cin>>day>>month>>year;

        bool leap_year = false;
        int total_days = 365;

        if (year%4 == 0)
        {
            leap_year = true;
            total_days = 366;
        }

        28 aug -> friday
        7*31=217 ,4*30=120 ,1*28/29
        31+29+31+30+31+30+31+31+30+31+30+31
        31+60+91+121+152+182+213+244+274+305+335+366
    }

    return 0;
}
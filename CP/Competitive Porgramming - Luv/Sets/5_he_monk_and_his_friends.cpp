// https://www.hackerrank.com/challenges/cpp-sets/problem?fbclid=IwAR1Z1fv5RnGAqByvADCRUv4pYQAAmQ_zV5rgVVCagY-DneWu6TSWENdncsY

// To know more about sets click Here. Coming to the problem, you will be given queries. Each query is of one of the following three types:

// : Add an element to the set.
// : Delete an element from the set. (If the number is not present in the set, then do nothing).
// : If the number

//     is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).

// Input Format

// The first line of the input contains
// where is the number of queries. The next lines contain query each. Each query consists of two integers and where is the type of the query and

// is an integer.

// Constraints



// Output Format

// For queries of type
// print "Yes"(without quotes) if the number is present in the set and if the number is not present, then print "No"(without quotes).
// Each query of type

// should be printed in a new line.

// Sample Input

// 8
// 1 9
// 1 6
// 1 10
// 1 4
// 3 6
// 3 14
// 2 6
// 3 6

// Sample Output

// Yes
// No
// No


#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;


    while(t--){

        int n,m;
        cin>>n>>m;

        unordered_set<int> candies;

        long long x;

        for (int i = 0; i < n; i++)
        {
            cin>>x;

            candies.insert(x);
        }

        for (int i = 0; i < m; ++i)
        {
            cin>>x;

            if (candies.find(x) != candies.end())
            {
                cout<<"YES"<<endl;
            }else {

                cout<<"NO"<<endl;
            }

            candies.insert(x);
        }
    }

    return 0;
}


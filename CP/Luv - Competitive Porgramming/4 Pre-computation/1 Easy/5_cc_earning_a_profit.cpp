// https://www.codechef.com/problems/ICL1905?tab=statement

// Earning A Profit

// There are NN planets numbered 11 to NN. You are a space merchant who earns by selling goods on these planets. Traveling to each planet requires you to pay for the fuel. The difficulty of traveling to ii-th planet is DiDi​. You need to plan your trip by choosing a consecutive sub segment of planets.

// Your earning of the trip is calculated as follows -

//     You earn AA coins for every planet you visit.
//     For each planet ii you visit, you have to pay CiCi​ coins for the fuel.
//     If you visit every planet with indices LL to RR, you also have to pay gap(L,R)gap(L,R) coins where
//     gap(L,R)=max[(Dr−Dl)2]gap(L,R)=max[(Dr​−Dl​)2] forL<=l<=r<=RforL<=l<=r<=R

// Calculate the maximum profit you can earn by traveling to a consecutive segment of planets. Note that if you travel to no planet at all, your net profit will be zero.

// ###Input:

//     First line will contain TT, number of testcases. Then the testcases follow.
//     For each testcase, the first line contains two integers NN and AA
//     The next NN lines contains two integers Ci,DiCi​,Di​

// ###Output: For each testcase, output a single integer denoting the maximum profit you can earn.

// ###Constraints

//     1≤T≤101≤T≤10
//     1≤N≤30001≤N≤3000
//     1≤A≤1061≤A≤106
//     1≤Di,Ci≤1061≤Di​,Ci​≤106

// ###Sample Input:
// 1 3 10 1 3 3 1 2 2

// ###Sample Output: 20

// ###EXPLANATION: For L = 1 and R = 3, we have profit = (3 - 1 + 1) * 10 - (1 + 3 + 2) - (3 - 1)*(3 - 1) = 20. This is the maximum possible profit for any sub-segment.
// Did you like the problem statement?
// 30 users found this helpful
// More Info
// Time limit1 secs
// Memory limit1.5 GB
// Source Limit50000 Bytes

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<pair<int, int>> &costOfTravelling, int a, int n) {

    vector<int> fuelCost(n);
    fuelCost[0] = costOfTravelling[0].first;

    for (int i = 1; i < n; ++i)
    {
        fuelCost[i] = fuelCost[i-1] + costOfTravelling[i].first;
    }

    long long maxProfit = LLONG_MIN;

    for (int l = 0; l < n; ++l)
    {

        int minDiff = costOfTravelling[l].second;
        int maxDiff = costOfTravelling[l].second;
        for (int r = l; r < n; ++r)
        {
            long long profit = (r-l+1) * a;

            long long costOfFuel;

            if (l == 0) {
                costOfFuel = fuelCost[r];
            } else {
                costOfFuel = fuelCost[r] - fuelCost[l - 1];
            }

            minDiff = min(minDiff, costOfTravelling[r].second);
            maxDiff = max(maxDiff, costOfTravelling[r].second);
            long long diff = 1LL * (maxDiff - minDiff) * (maxDiff - minDiff);


            long long netProfit = profit - costOfFuel - diff;

            maxProfit = max(netProfit, maxProfit);
        }
    }

    return max(0LL, maxProfit);
}

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n, a;
        cin>>n>>a;

        vector<pair<int, int>> costOfTravelling(n);

        for (int i = 0; i < n; ++i) {
            int c, d;
            cin >> c >> d;
            costOfTravelling[i] = {c, d};
        }

        cout<<maxProfit(costOfTravelling, a, n)<<"\n";
    }

    return 0;
}
// Twice Counter
// Difficulty: EasyAccuracy: 62.61%Submissions: 42K+Points: 2

// Given a list of N words. Count the number of words that appear exactly twice in the list.

// Example 1:

// Input:
// N = 3
// list = {Geeks, For, Geeks}
// Output: 1
// Explanation: 'Geeks' is the only word that 
// appears twice. 

// Example 2:

// Input:
// N = 8
// list = {Tom, Jerry, Thomas, Tom, Jerry, 
// Courage, Tom, Courage}
// Output: 2
// Explanation: 'Jerry' and 'Courage' are the 
// only words that appears twice. 


// Your Task:  
// You dont need to read input or print anything. Complete the function countWords() which takes integer N and list of strings as input parameters and returns the number of words that appear twice in the list.


// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)  


// Constraints:
// 1<= N <= 104


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countWords(string list[], int n)
    {
       unordered_map<string, int> map;

       for(int i=0;i<n; ++i) {

           map[list[i]]++;
       }

       int count = 0;

       for(auto &value: map) {

           if(value.second == 2) {

               count++;
           }

       }

       return count;
   }

};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;

    }
    return 0;
}
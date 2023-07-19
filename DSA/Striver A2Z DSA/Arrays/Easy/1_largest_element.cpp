// https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems

#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }

  // Brute force -> O(nlogn)

  // sort(arr.begin(), arr.end());

  // cout << arr[n - 1];

  // Better -> O(n)
  int largest = INT_MIN;

  for (auto it : arr)
  {
    if (it > largest)
    {
      largest = it;
    }
  }
}
// https://www.codingninjas.com/studio/problems/rotate-array_1230543

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void revr(int start, int end, vector<int> &arr)
{

  while (start < end)
  {
    swap(arr[start++], arr[end--]);
  }
}

int main()
{

  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int k;
  cin >> k;

  k = k % n;

  // brute -> time complexity -> O(n+d) S->O(d)

  vector<int> temp(k);

  for (int i = 0; i < k; i++)
  {
    temp[i] = arr[i];
  }

  for (int i = k; i < n; i++)
  { 
    arr[i - k] = arr[i];
  }

  for (int i = n - k; i < n; i++)
  {
    arr[i] = temp[i - (n - k)];
  }

  // optimal -> time complexity -> O(2n) S->O(1)

  // revr(0, k - 1, arr);
  // revr(k, n - 1, arr);
  // revr(0, n - 1, arr);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
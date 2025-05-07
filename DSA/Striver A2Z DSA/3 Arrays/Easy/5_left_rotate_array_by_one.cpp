#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin>>n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }

  int temp = arr[0];

  for (int i = 0; i < n - 1; i++)
  {
    arr[i] = arr[i+1];
  }

  arr[n-1] = temp;

  return 0;
}
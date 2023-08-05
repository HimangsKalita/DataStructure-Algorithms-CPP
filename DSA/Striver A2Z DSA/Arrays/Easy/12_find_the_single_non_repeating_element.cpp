#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // for sorted array
  // for(int i =0;i<n;i+=2){
  // 	if(arr[i]==arr[i+1]){
  //     continue;
  // 	}
  //   cout<<arr[i];
  //   break;
  // }

  // for unsorted array
  unordered_map<int, int> freq;

  for (int i = 0; i < n; i++)
  {
    freq[arr[i]]++;
  }

  for (auto i : freq)
  {
    if (i.second == 1)
    {
      cout << i.first;
    }
  }

  return 0;
}
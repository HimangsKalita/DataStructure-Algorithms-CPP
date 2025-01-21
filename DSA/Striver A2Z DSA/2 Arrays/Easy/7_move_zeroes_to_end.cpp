#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  // brute force : time complexity -> o(2N) space complexity -> O(N)

  // int temp[n], index = 0;

  // for (int i = 0; i < n; i++)
  // {
  //   if (arr[i] != 0)
  //   {
  //     temp[index++] = arr[i];
  //   }
  // }

  // for (int i = 0; i < index; i++)
  // {
  //   arr[i] = temp[i];
  // }

  // optimal solution : time complexity -> O(N) space complexity -> O(0)

  int j = 0;

  for (int i = 0; i < n; i++)
  {
    if (a[i] != 0)
    {
      swap(a[j++],a[i]);
    }
  }
  
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }

  return 0;
}
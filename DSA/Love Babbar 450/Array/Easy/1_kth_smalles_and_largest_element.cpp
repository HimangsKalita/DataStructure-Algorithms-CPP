#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    //brute force -> O(logn)

    sort(arr.begin(), arr.end());

    cout << arr[k - 1] << " " << arr[n - k]<<endl;

    // Better solution - time complexity -> O(n+m)

    auto max = max_element(arr.begin(), arr.end());
    auto min = min_element(arr.begin(), arr.end());

    int 

  }
}
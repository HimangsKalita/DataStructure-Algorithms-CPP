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

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {

      cin >> arr[i];
    }

    int sum = 0, largest = 0;

    for (int i = 0; i < n; i++)
    {

      sum += arr[i];

      if (sum > largest)
      {
        largest = sum;
      }

      if (arr[i] == 0)
      {
        sum = 0;
      }
    }

    cout << largest << endl;
  }

  return 0;
}
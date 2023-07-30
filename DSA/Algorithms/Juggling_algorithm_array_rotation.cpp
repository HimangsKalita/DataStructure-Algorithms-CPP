#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  else
  {
    return gcd(b, a % b);
  }
}

int main()
{

  int n;
  cin >> n;

  int d;
  cin >> d;

  d = d%n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int sets = gcd(n, d);

  for (int i = 0;i<sets;++i)
  {
    int temp = arr[i];

    int j = i;

    while (true)
    {
      int k = j+d;

      if (k>n-1)
      {
        k = k % n;
      }

      if (k == i)
      {
        break;
      }
      
      swap(arr[j], arr[k]);

      j = k;
    }

    arr[j] = temp;
  }

  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b)
{
  int n = a.size(), m = b.size();

  // Brute force : time complexity -> O(n1logn + n2logn) + (n1+n2)
  //  space complexity -> (n1 + n2) + (n1 + n2)
  // set<int> s;

  // for (int i = 0; i < n; i++)
  // {
  //   s.insert(a[i]);
  // }

  // for (int i = 0; i < m; i++)
  // {
  //   s.insert(b[i]);
  // }

  // vector<int> unionArr(s.begin(), s.end());

  // optimal solution: time complexity -> O(n1+n2)
  // space complexity -> O(n1+n2)

  int i = 0, j = 0;
  vector<int> unionArr;

  while (i < n && j < m)
  {
    if (a[i] <= b[j])
    {
      if (unionArr.size() == 0 || unionArr.back() != a[i])
      {
        unionArr.push_back(a[i]);
      }
      i++;
      // i++ outiside the if statement because we have iterate as the condition might not meet 
    }
    else
    {
      if (unionArr.size() == 0 || unionArr.back() != b[j])
      {
        unionArr.push_back(b[j]);
      }
      j++;
    }
  }

  while (i < n)
  {
    if (unionArr.back() != a[i])
    {
      unionArr.push_back(a[i]);
    }
    i++;
  }

  while (j < m)
  {
    if (unionArr.back() != b[j])
    {
      unionArr.push_back(b[j]);
    }
    j++;
  }

  return unionArr;
}

int main()
{
  int aSize, bSize;
  cin >> aSize >> bSize;

  vector<int> a(aSize), b(bSize);

  for (int i = 0; i < aSize; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < bSize; i++)
  {
    cin >> b[i];
  }

  vector<int> c = sortedArray(a, b);

  for (int i = 0; i < c.size(); i++)
  {
    cout << c[i] << " ";
  }

  return 0;
}

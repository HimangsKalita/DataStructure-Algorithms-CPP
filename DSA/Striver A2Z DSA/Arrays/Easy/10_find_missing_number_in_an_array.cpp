#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;

  vector<int> nums(n);

  for (int i = 0; i < n - 1; i++)
  {
    cin >> nums[i];
  }

  // brute foce : time complexity -> O(2N)
  // space complexity -> O(N)

  // int freq[n + 1];
  // std::fill(freq, freq + (n + 1), 0);

  // for (int i = 0; i < n; i++)
  // {
  //   freq[nums[i]]++;
  // }

  // int num = 0;

  // for (int i = 0; i < n + 1; i++)
  // {
  //   if (freq[i] == 0)
  //   {
  //     num = i;
  //     break;
  //   }
  // }

  // cout << num;

  // optimal soltion time complexity -> O(N)
  // space complexity -> O(1)

  int sum = 0;

  for (int i = 0; i < nums.size(); i++)
  {
    sum += nums[i];
  }

  int totalSum = (n * (n + 1)) / 2;

  // cout << totalSum << " " << sum << endl;

  cout << totalSum - sum;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;

  long long int k;
  cin >> k;

  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int maxLength = 0;

  // brute force -> time complexity -> O(2N)
  // space complexity -> O(1)

  // for (int i = 0; i < n; i++)
  // {
  //   int sum = 0;
  //   for (int j = i; j < n; j++)
  //   {
  //     sum += arr[j];
  //     if (sum == k)
  //     {
  //       maxLength = max(maxLength, j-i+1);
  //     }

  //   }

  // }

  // better solution ->  using prefix sum -> time complexity -> O(N)
  // space complexity -> O(N)

  // map<long long int, int> prefSum;
  // long long int sum = 0;
  // int maxLen = 0;

  // for (int i = 0; i < n; i++)
  // {
  //   sum += arr[i];

  //   if (sum == k)
  //   {
  //     maxLen = max(maxLen, i + 1);
  //   }

  //   long long int rem = sum - k;

  //   if (prefSum.find(rem) != prefSum.end())
  //   {
  //     maxLen = max(maxLen, i - prefSum[rem]);
  //   }

  //   if (prefSum.find(sum) == prefSum.end())
  //   {
  //     prefSum[sum] = i;
  //   }
  // }

  // Doesn't work in negative and zeroes in arrays
  // optimal solution : using two pointers -> time complexity -> O(N)
  // space complexity -> O()

  // int left = 0, right = 0; // 2 pointers
  // long long sum = a[0];
  // int maxLen = 0;
  // while (right < n) {

  //     while (left <= right && sum > k) {
  //         sum -= a[left];
  //         left++;
  //     }

  //     if (sum == k) {
  //         maxLen = max(maxLen, right - left + 1);
  //     }

  //     right++;
  //     if (right < n) sum += a[right];
  // }

  // cout << maxLen << endl;
}
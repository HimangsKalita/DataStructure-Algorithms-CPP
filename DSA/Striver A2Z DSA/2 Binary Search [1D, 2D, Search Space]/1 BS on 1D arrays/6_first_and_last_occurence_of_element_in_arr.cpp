#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{

  vector<int> ans;

  int n = nums.size();
  int start = 0, end = n - 1;
  int firstIndex = -1;

  while (start <= end)
  {

    int mid = start + (end - start) / 2;

    if (nums[mid] == target)
    {
      firstIndex = mid;
      end = mid - 1;
    }
    else if (nums[mid] < target)
    {
      start = mid + 1;
    }
    else
    {

      end = mid - 1;
    }
  }

  start = 0;
  end = n - 1;
  int lastIndex = -1;

  while (start <= end)
  {

    int mid = start + (end - start) / 2;

    if (nums[mid] == target)
    {
      lastIndex = mid;
      start = mid + 1;
    }
    else if (nums[mid] < target)
    {
      start = mid + 1;
    }
    else
    {

      end = mid - 1;
    }
  }

  ans.push_back(firstIndex);
  ans.push_back(lastIndex);

  return ans;
}
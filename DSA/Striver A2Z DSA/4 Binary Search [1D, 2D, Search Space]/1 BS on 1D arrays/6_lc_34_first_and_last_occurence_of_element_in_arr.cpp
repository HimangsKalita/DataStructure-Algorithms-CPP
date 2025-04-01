// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/solutions/14699/clean-iterative-solution-with-two-binary-searches-with-explanation/

// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.



// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]

// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]



// Constraints:

//     0 <= nums.length <= 105
//     -109 <= nums[i] <= 109
//     nums is a non-decreasing array.
//     -109 <= target <= 109



#include <bits/stdc++.h>
using namespace std;

// int firstIndex(vector<int> &nums, int n, int target) {

//   int ans = -1;

//   int left = 0, right = n-1;

//   while(left <= right) {

//     int mid = left + (right - left)/2;

//     if(nums[mid] == target) {

//       ans = mid;

//       right = mid - 1;
//     }else if(nums[mid] < target) {

//       left = mid + 1;
//     }else {

//       right = mid - 1;
//     }
//   }

//   return ans;
// }

// int lastIndex(vector<int> &nums, int n, int target) {

//   int ans = -1;

//   int left = 0, right = n-1;

//   while(left <= right) {

//     int mid = left + (right - left)/2;

//     if(nums[mid] == target) {

//       ans = mid;

//       left = mid + 1;
//     }else if(nums[mid] < target) {

//       left = mid + 1;
//     }else {

//       right = mid - 1;
//     }
//   }

//   return ans;
// }

// vector<int> searchRange(vector<int>& nums, int target) {

//   int n = nums.size();

//   int fIndex = firstIndex(nums, n, target);
//   int lIndex = lastIndex(nums, n, target);

//   vector<int> ans;

//   ans.push_back(fIndex);
//   ans.push_back(lIndex);

//   return ans;
// }

// using upper bound & lower bound
// Time - 2*O(logN)
// Space - O(1)

int lowerBound(vector<int> &nums, int n, int target) {

  int left = 0, right = n-1;

  int ans = -1;

  while(left <= right){

    int mid = left + (right - left)/2;

    if (nums[mid] <= target)
    {
      ans = mid;

      right = mid - 1;
    }else {

      left = mid + 1;
    }
  }

  cout<<ans<<endl;

  return ans;
}

int upperBound(vector<int> &nums, int n, int target) {

  int left = 0, right = n-1;

  int ans = -1;

  while(left <= right){

    int mid = left + (right - left)/2;

    if (nums[mid] > target)
    {
      ans = mid;

      right = mid - 1;
    }else {

      left = mid + 1;
    }
  }

  return ans;
}

vector<int> searchRange(vector<int>& nums, int target) {

  int n = nums.size();

  int fIndex = lowerBound(nums, n, target);

  vector<int> ans;

  if (fIndex == -1 || nums[fIndex] != target)
  {
    ans.push_back(-1);
    ans.push_back(-1);

  }else {

    ans.push_back(fIndex);
    ans.push_back(upperBound(nums, n, target) - 1);

  }

  return ans;
}

int main(){

  ios::sync_with_stdio(false);   
  cin.tie(0);

  int n, x;
  cin>>n>>x;

  vector<int> arr(n);

  for (int i = 0; i < n;  ++i)
  {
    cin>>arr[i];
  }

  vector<int> ans = searchRange(arr, x);

  cout<<ans[0]<<" "<<ans[1];

  return 0;
}


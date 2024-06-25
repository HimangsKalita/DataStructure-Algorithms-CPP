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

  // for sorted array : time complxity -> O(N^2)
  // space complexity -> O(1)
  // for(int i =0;i<n;i+=2){
  // 	if(arr[i]==arr[i+1]){
  //     continue;
  // 	}
  //   cout<<arr[i];
  //   break;
  // }

  // for unsorted array
  // brute force : time complexity -> O(2N)
  // space complexity -> O(1)

  // for (int i = 0; i < n; i++)
  // {
  //   int count = 0;
  //   for (int j = 0; j < n; j++)
  //   {
  //     if (arr[i] == arr[j])
  //     {
  //       count++;
  //     }
  //   }

  //   if (count == 1)
  //   {
  //     cout << arr[i];
  //     exit(0);
  //   }
  // }

  // better solution : hasing (cannot use in negative numbers and bigger data values) : time complexity -> O(3N)
  // space (N+1)

  // int maxElement = arr[0];

  // for (int i = 1; i < n; i++)
  // {
  //   if (arr[i] > maxElement)
  //   {
  //     maxElement = arr[i];
  //   }
  // }

  // int hash[maxElement+1] = {0};

  // for (int i = 0; i < n; i++)
  // {
  //   hash[arr[i]]++;
  // }

  // for (int i = 0; i <= maxElement; i++)
  // {
  //   if (hash[i] == 1)
  //   {
  //     cout << i;
  //     break;
  //   }
  // }

  // better unordered_map  time complexity -> O(2*(N/2 + 1))
  // space complexity ->  0(N/2 + 1)

  // unordered_map<int, int> freq;

  // for (int i = 0; i < n; i++)
  // {
  //   freq[arr[i]]++;
  // }

  // for (auto i : freq)
  // {
  //   if (i.second == 1)
  //   {
  //     cout << i.first;
  //   }
  // }

  // optimal soltion XOR -> time complexity -> O(N)
  // space complexity -> O(1)

  int xor1 = 0;

  for (int i = 0; i < n; i++)
  {
    xor1 = xor1 ^ arr[i];
  }

  cout<<xor1;  
  
  return 0;
}
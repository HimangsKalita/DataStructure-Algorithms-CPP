#include <bits/stdc++.h>
using namespace std;

int main()
{

  // Array initilization
  // 1. Empty Array
  int arr1[5] = {};

  // 2. Passing values
  int arr2[5] = {1, 2, 3, 4, 5};

  // 3. Partial passing values
  int arr3[5] = {1, 2, 3};

  // 4. Initializing without mentioning the size
  int arr4[] = {1, 2, 3, 4, 5};

  // 5. Universal Initialization
  int arr5[]{1, 2, 3, 4, 5};

  // Array insertion
  arr1[2] = 10; // Time complexity O(1)

  int arr[5];

  // Element insertoin Time complexity O(n)
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  {
    arr[i] = i + 1;
  }

  // Accessing elements Time Complexity: O(1)
  cout << arr[4];

  // Searching in Array Time Complexity: O(N), where N is the size of the array

  int toCheckValue = 10;
  for (int element : arr)
  {
    if (element == toCheckValue)
    {
      return true;
    }else
    {
      return false;
    }
    
  }

  // Multidimentional array

  int i, j;
  int matrix[3][2] = {{4, 5}, {34, 67}, {8, 9}}; // time complexity O(1)

  // time complexity O(n^2)
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      cout << "matrix[" << i << "][" << j
           << "]=" << matrix[i][j] << endl;
    }
  }

  return 0;
}
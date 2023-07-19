// https://www.codingninjas.com/studio/problems/reverse-the-array_1262298?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int startIndex, int endIndex, vector<int> &arr){

  while (startIndex < endIndex)
  {
    swap(arr[startIndex],arr[endIndex]);
    startIndex++;
    endIndex--;
  }
}

int main(){

  int testCases;
  cin>>testCases;

  while (testCases--)
  {
    int arrSize;
    cin>>arrSize;

    vector<int> arr(arrSize);

    int m;
    cin>>m;

    for (int i = 0; i < arrSize; i++)
    {
      cin>>arr[i];
    }

    reverseArray(m+1, arrSize - 1, arr);

    for (int i = 0; i < arrSize; i++)
    {
      cout<<arr[i]<<" ";
    }

    cout<<endl;
    
  }
  
}
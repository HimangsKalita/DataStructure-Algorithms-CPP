// https://www.codingninjas.com/studio/problems/remove-duplicates-from-sorted-array_1102307

#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin >> n;

	vector<int> arr(n);

	int input;

	for (int i = 0; i < arr.size(); i++)
	{
		cin >> arr[i];
	}

	// Brute - time complexity -> O(nlogn)
	// set<int> s;

	// for (int i = 0; i < n; i++)
	// {
	//   int x;
	//   cin>>x;
	//   s.insert(x); // logn
	// }

	// rturn s.size();

	// optimal Two pointer approach- time complexity -> O(n)

	// int j = 0;

	// for (int i = 1; i < n - 1; i++)
	// {
	// 	if (arr[j] != arr[i])
	// 	{
	// 		arr[j++] = arr[i];
	// 	}
		
	// }

	// return j+1;
}
// https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems

#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin >> n;

	vector<int> a(n);

	int input;

	for (int i = 0; i < a.size(); i++)
	{
		cin >> a[i];
	}

	// Brute force -> O(nlogn)

	// sort(arr.begin(), arr.end());

	// int largest = a[n-1];

	// for (int i = n-2; i >=0 ; i--)
	// {
	// 	if (a[i] != largest)
	// 	{
	// 		return a[i];
	// 	}else{
	// 		return -1;
	// 	}
	// }

	int largest = a[0], secondLargest = -1;
	int smallest = INT_MAX, secondSmallest = INT_MAX;

	for (auto it : a)
	{
		if (it > largest)
		{
			secondLargest = largest;
			largest = it;
		}
		else if (it > secondLargest && it != largest)
		{
			secondLargest = it;
		}

		if (it < smallest)
		{
			secondSmallest = smallest;
			smallest = it;
		}
		else if (it < secondSmallest && it != smallest)
		{
			secondSmallest = it;
		}
	}

	cout << secondLargest << " " << secondSmallest;

	return 0;
}
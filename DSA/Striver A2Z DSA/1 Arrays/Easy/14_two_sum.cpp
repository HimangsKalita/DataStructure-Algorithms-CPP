#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &vec)
{

	for (auto it : vec)
	{
		cout << it << " ";
	}
}

int main()
{

	int t;
	cin >> t;

	while (t--)
	{

		int n, target;
		cin >> n >> target;

		vector<int> nums(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> nums[i];
		}

		int sum = 0;

		vector<int> res;

		for (int i = 0; i < n; ++i)
		{
			sum = 0;

			for (int j = i; j < n; ++j)
			{
				sum += nums[j];

				res.push_back(j);

				if (sum == target)
				{
					printVec(res);
					exit(0);
				}
			}
		}
	}

	return 0;
}
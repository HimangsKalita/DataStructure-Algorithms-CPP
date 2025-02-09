#include <bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(0);   
	cin.tie(0);

	int n;
	cin>>n;

	if (n==1)
	{
		cout<<"*";
	}else {

		for(int i=0;i<n;i++) {

			// int spaces = n-2;

			// int stars = 1;

			// if(i==0 || i==n-1) {

			// 	spaces = 0;
			// 	stars = n/2;
			// 	if(n%2==1) {

			// 		cout<<"*";
			// 	}
			// }

			// for(int star=0;star<stars;star++) {

			// 	cout<<"*";
			// }

			// for(int space=0;space<spaces;space++) {

			// 	cout<<" ";
			// }

			// for(int star=0;star<stars;star++) {

			// 	cout<<"*";
			// }

			for (int j = 0; j < n; ++j)
			{
				if (i==0 || i==n-1 || j==0 || j ==n-1)
				{
					cout<<"*";
				}else {

					cout<<" ";
				}
			}

			cout<<"\n";

		}
	}

	return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(0);   
	cin.tie(0);


	int n;
	cin>>n;

	long long int sum = n*(n+1);

	sum = sum/2;

	if (sum % 2 == 0)
	{
		cout<<0<<endl;
	}else
	{
		cout<<1<<endl;
	}

	return 0;
}

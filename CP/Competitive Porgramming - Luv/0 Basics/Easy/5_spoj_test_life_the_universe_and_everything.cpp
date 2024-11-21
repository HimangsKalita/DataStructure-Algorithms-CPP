// https://www.spoj.com/problems/TEST/

// Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.
// Example

// Input:
// 1
// 2
// 88
// 42
// 99

// Output:
// 1
// 2
// 88

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(0);   
	cin.tie(0);

	bool flag = true;
	int num;

	while(flag){

		cin>>num;

		if (num == 42)
		{
			flag = false;
		}else
		{
			cout<<num<<endl;
		}
	}

	return 0;
}


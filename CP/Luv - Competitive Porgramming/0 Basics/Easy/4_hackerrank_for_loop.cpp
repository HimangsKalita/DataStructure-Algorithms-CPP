// https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

// In this challenge, you will use a for loop to increment a variable through a range.

// Input Format

// You will be given two positive integers,
// and (

// ), separated by a newline.

// Output Format

// For each integer
// in the inclusive interval

// :

//     If 

// , then print the English representation of it in lowercase. That is "one" for , "two" for
// , and so on.
// Else if
// and it is an even number, then print "even".
// Else if

//     and it is an odd number, then print "odd".

// Note:

// Sample Input

// 8
// 11

// Sample Output

// eight
// nine
// even
// odd


#include <bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(0);   
	cin.tie(0);

	int a,b;
	cin>>a>>b;

	for (int i = a; i < b; ++i)
	{
		if (i<=9)
		{
			switch(i)
			{
			case 1:
				cout<<"one"<<endl;
				break;
			case 2:
				cout<<"two"<<endl;
			case 3:
				cout<<"three"<<endl;
			case 4:
				cout<<"four"<<endl;
			case 5:
				cout<<"five"<<endl;
			case 6:
				cout<<"six"<<endl;
			case 7:
				cout<<"seven"<<endl;
			case 8:
				cout<<"eight"<<endl;
			case 9:
				cout<<"nine"<<endl;
			}
		}else
		{
			if (i%2 == 0)
			{
				cout<<"even";
			}else {

				cout<<"odd";
			}
		}
	}

	return 0;
}


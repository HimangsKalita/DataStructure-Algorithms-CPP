// https://practice.geeksforgeeks.org/problems/reverse-a-string/1

#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str){
    
  int i = 0, j = str.size() - 1;
  
  while(i < j){
      
      swap(str[i++],str[j--]);
  }
  
  return str;
  
}

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}
//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/foo-and-exams-4/

#include <iostream>
using namespace std;

int main(){
	int T;
	cin>>T;

	while(T--){
		long long int a,b,c,d,K;
		cin>>a>>b>>c>>d>>K;

		long long int s=1;
		long long int e=1e6;

		long long int ans=0;

		while(s<=e){
			long long int mid=s+(e-s)/2;
			long long int total=(a*mid*mid*mid)+(b*mid*mid)+(c*mid)+d;

			if(total<=K){
				ans=mid;
				s=mid+1;
			}
			else{
				e=mid-1;
			}
		}

		cout<<ans<<endl;
	}

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

const int mod= 1000000007;
int pow(int a,int b){
	if(a==0 && b==0) return 1;
	if(a==1 || b==1) return a;
	if(b==0) return 1;
	long int ans= pow(a,b/2)%mod;
	ans = (ans *ans)%mod;
	if(b&1) return (a*ans)%mod;
	return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		cout<<pow(a,b)<<endl;
	}
	return 0;
}
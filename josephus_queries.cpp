/*
#include <iostream>
using namespace std;

int josephus(int n,int k){
    if(n==1) return n;
    if(k==1) return 2;
    int ans=josephus(n-1,k-1)+2;
    if(ans>n) return ans%n;
    return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    cout<<josephus(n,k)<<endl;
	}
	return 0;
}
TC-O(n); below one has TC-log(n). */
#include <bits/stdc++.h>
using namespace std;

int josephus(int n,int k){
	if(n==1) return 1;
	if(k<= ((n+1)>>1)){
		int ans=2*k;
		if(ans==n) return n;
		return ans%n;
	}
	if(n&1) return josephus((n-1)/2,k-(n+1)/2)*2+1;
	else return josephus(n/2,k-n/2)*2-1;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<josephus(n,k)<<endl;
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

long int maxScore(long int arr[],long int dp[][5001],int& n,int s,int e,long int sum){
	if(s>e) return 0;
    if(e==s) return arr[s];
    if(dp[s][e]!=-1) return dp[s][e];
    return dp[s][e]=sum-min((long int)(maxScore(arr,dp,n,s+1,e,sum-arr[s])),(long int)(maxScore(arr,dp,n,s,e-1,sum-arr[e])));
}

int main(){
    int n;
    cin>>n;
    long int arr[n];
    long int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+= arr[i];
    }
    long int dp[n][5001];
    memset(dp,-1,sizeof(dp));
    cout<<maxScore(arr,dp,n,0,n-1,sum);
}
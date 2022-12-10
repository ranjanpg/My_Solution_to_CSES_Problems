#include <bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int numPaths(vector<vector<char>>& grid,vector<vector<int>>& dp, int& n,int i,int j){
	if(i>=n || j>=n || grid[i][j]=='*') return 0;
	if(i==n-1 && j==n-1) return 1;
	if(dp[i][j]!=-1) return dp[i][j];
	return dp[i][j]=(numPaths(grid,dp,n,i+1,j)%mod+numPaths(grid,dp,n,i,j+1)%mod)%mod;
}
int main() {
	int n;
	cin>>n;
	vector<vector<char>> grid(n,vector<char>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>grid[i][j];
		}
	}
	vector<vector<int>> dp(n,vector<int>(n,-1));
	cout<<numPaths(grid,dp,n,0,0);
	return 0;
}
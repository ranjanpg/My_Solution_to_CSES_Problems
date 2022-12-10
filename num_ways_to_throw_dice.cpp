/*Your task is to count the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and 6.

For example, if n=3, there are 4 ways:
1+1+1
1+2
2+1
3
Input

The only input line has an integer n.

Output

Print the number of ways modulo 109+7.

Constraints
1≤n≤106
Example

Input:
3

Output:
4*/
#include<bits/stdc++.h>
using namespace std;
int mod=1000000007;
int num_ways(int dp[],int n){
    if(n<0) return 0;
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    int ans=0;
    for(int i=1;i<=6;i++){
        ans = (ans+(num_ways(dp,n-i))%mod)%mod;
    }
    return dp[n]=ans;
}
int main(){
    cin.sync_with_stdio(false);
    int n;
    cin>>n;
    int dp[1000001];
    memset(dp,-1,sizeof(dp));
    cout<<num_ways(dp,n);
    return 0;
}
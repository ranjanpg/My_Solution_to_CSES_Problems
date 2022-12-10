/*
You are given an integer n. On each step, you may subtract one of the digits from the number.

How many steps are required to make the number equal to 0?

Input

The only input line has an integer n.

Output

Print one integer: the minimum number of steps.

Constraints
1≤n≤106
Example

Input:
27

Output:
5

Explanation: An optimal solution is 27→20→18→10→9→0.
*/
#include <bits/stdc++.h>
using namespace std;
int reduceToZero(int dp[],int n){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int mD=-1;
    int temp=n;
    while(temp){
        mD=max(mD,temp%10);
        temp /= 10;
    }
    return dp[n]= 1+reduceToZero(dp,n-mD);
}
int main() {
	int n;
	cin>>n;
	int dp[n+1];
	memset(dp,-1,sizeof(dp));
	cout<<reduceToZero(dp,n);
	return 0;
}
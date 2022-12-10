/*
The Fibonacci numbers can be defined as follows:
F0=0
F1=1
Fn=Fn−2+Fn−1
Your task is to calculate the value of Fn for a given n.

Input

The only input line has an integer n.

Output

Print the value of Fn modulo 109+7.

Constraints
0≤n≤1018
Example

Input:
10

Output:
55
*/
#include<bits/stdc++.h>
using namespace std;

int mod=1e9+7;
int main(){
    long int n;
    cin>>n;
    if(n<2) return n;
    int t0=0;
    int t1=1;
    int ans;
    for(int i=2;i<=n;i++){
        ans=(t0%mod+t1%mod)%mod;
        t0=t1%mod;
        t1=ans;
    }
    cout<<ans;
    return 0;
}
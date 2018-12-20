#include<bits/stdc++.h>
using namespace std;

int stairs(int n){
	if(n<=1)
		return 1;
	return stairs(n-1)+stairs(n-2);
}

int stairsDp(int n){
	int dp[n+1];
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<=n;i++)
		dp[i]=dp[i-1]+dp[i-2];
	return dp[n];
}

int main(){
	int n;
	cin>>n;
	int res=stairs(n);
	cout<<res<<"\n";
	int res2=stairsDp(n);
	cout<<res<<"\n";
	return 0;
}

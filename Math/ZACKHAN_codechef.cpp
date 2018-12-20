#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,l,b,res;
	cin>>t;
	while(t--){
		cin>>l>>b;
		res=gcd(l,b);
		cout<<res<<"\n";
	}
	return 0;
}

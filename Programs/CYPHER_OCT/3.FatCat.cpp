#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t,m,n,a,p,d;
	cin>>t;
	while(t--){
		cin>>a>>d;
		cin>>m>>n>>p;
		m=abs(m);
		n=abs(n);
		ll sum = ((m+n)*p*2)+d;
		if(sum<=a)
			cout<<"Possible\n";
		else
			cout<<"Impossible\n";
	}
	return 0;
}

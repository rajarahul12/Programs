#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll n;
	cin>>n;
	ll a[n],i,j;
	for(j=0;j<n;j++)
		cin>>a[j];
	cin>>i;
	ll lmax=-1,rmax=-1,lloc=-1,rloc=-1;
	for(j=0;j<i;j++){
		if(a[j]>a[i] && a[j]>=lmax){
			lmax=a[j];
			lloc=j;
		}
	}
	for(j=i+1;j<n;j++){
		if(a[j]>a[i] && a[j]>rmax){
			rmax=a[j];
			rloc=j;
		}
	}
	ll res;
	if(lmax==-1 || rmax==-1)
		cout<<0;
	else{
		res=(lmax*rmax)%1000000007;
		cout<<(int)res;
	}
	
	return 0;
}

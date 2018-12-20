#include<bits/stdc++.h>
using namespace std;

double max_vol(int a[],int n,double p){
	double ans=0;
	for(int i=0;i<n;i++)
		ans+=pow((1-p),n-1-i)*a[i];
	return ans;
}

int main(){
	int n,p;
	cin>>n>>p;
	int v[n],i,maxvol=0;
	for(i=0;i<n;i++)
		cin>>v[i];
	sort(v,v+n);
//	for(i=0;i<n-1;i++){
//		maxvol += v[i] - v[i]*((n-i)*p/100);
//	}
//	maxvol+=v[n-1];
//	cout<<maxvol;
	cout<<max_vol(v,n,p/100);
	return 0;
}

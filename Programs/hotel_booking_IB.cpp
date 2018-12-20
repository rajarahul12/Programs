#include<bits/stdc++.h>
using namespace std;

int bookingPossible(int a[],int d[],int k,int n){
	int max=d[0],i;
	for(i=1;i<n;i++){
		if(max<d[i])
			max=d[i];
	}
	int c[max+2];
	memset(c,0,sizeof(c));
	for(i=0;i<n;i++){
		c[a[i]]+=1;
	}
	for(i=0;i<n;i++){
		c[d[i]+1]+=-1;
	}
	int sum=c[0];
	for(i=1;i<=max;i++){
		sum+=c[i];
		c[i]=sum;
	}
	for(i=0;i<=max;i++){
		if(c[i]>k)
			return 0;
//		cout<<c[i]<<" ";

	}
	return 1;
}

int main(){
	int n,k;
	cin>>n;
	int a[n],d[n],i;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>d[i];
	cin>>k;
	int res=bookingPossible(a,d,k,n);
	if(res)
		cout<<"YES\n";
	else
		cout<<"NO\n";	
}

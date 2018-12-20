#include<bits/stdc++.h>
using namespace std;

int findIndex(int a[],int n){
	int beg=0,end=n-1,mid;
	while(beg-end>1){
		mid=(beg+(end-beg))/2;
		if(a[beg]-beg != a[mid]-mid)
			end=mid;
		else if(a[end]-end != a[mid]-mid)
			beg=mid;
	}
	return mid+1;
}

int main(){
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
		cin>>a[i];
	int res=findIndex(a,n);
	cout<<res<<"\n";
	return 0;
}

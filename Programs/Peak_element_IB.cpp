#include<bits/stdc++.h>
using namespace std;

int findPeak(int a[],int n){
	int beg=0,end=n-1,mid;
	while(beg<=end){
		mid=(beg+end)/2;
		if((mid==0 || a[mid-1]<a[mid]) && (mid==n-1 || a[mid]>a[mid+1]))
			return mid;
		else if(a[mid]<a[mid-1])
			end=mid-1;
		else
			beg=mid+1;
	}
	
}

int main(){
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
		
	int res=findPeak(a,n);
	cout<<a[res]<<"\n";
	return 0;
}

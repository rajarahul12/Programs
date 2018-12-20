#include<bits/stdc++.h>
using namespace std;

int findVal(int a[],int n){
	int low=0,high=n-1,mid;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]!=mid+1 && a[mid-1]==mid)
			return mid+1;
		if(a[mid]!=mid+1)
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
		cin>>a[i];
	int res=findVal(a,n);
	cout<<res;
	return 0;
}

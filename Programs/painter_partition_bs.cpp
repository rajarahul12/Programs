#include<bits/stdc++.h>
using namespace std;

int findminTime(int a[],int n,int mid,int k){
	int max=a[0],i;
	for(i=1;i<n;i++){
		if(max<a[i])
			max=a[i];
	}
//	cout<<"max: "<<max<<"\nmid: "<<mid<<"\n";
	if(max > mid)
		return 0;
	int x=a[0],count=1,w=0;
	k--;
	for(i=1;i<n;i++){
//		cout<<"mid="<<mid<<" max= "<<max<<" i= "<<i<<" x= "<<x<<"\n";
		if(x+a[i]>mid){
			x=a[i];
			k--;
			count++;	
		}
		else{
			x+=a[i];	
			count++;	
		}
		
	}
	if(k==0){
		w=1;	
	}
	if(count==n && w==1)
		return 1;
	return 0;
}

int binarySearch(int min,int max,int a[],int n,int k){
	int beg=min,end=max,mid,res,ret=max+1;
	while(beg<=end){
		mid=(beg+end)/2;
		cout<<mid<<endl;
		if(findminTime(a,n,mid,k)){
			if(mid<ret)
				ret=mid;
//			cout<<"ret"<<ret<<"\n";
			end=mid-1;
		}
		else
			beg=mid+1;
	}
	return ret;
}

int main(){
	int i,k,t,n,max=0;
	cin>>k>>t>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		a[i]=a[i]*t;
		max+=a[i];
	}
	int min=a[0],res;
	for(i=1;i<n;i++){
		if(min>a[i])
			min=a[i];
	}
	res=binarySearch(min,max,a,n,k);
	cout<<res<<"\n";
//	res=findminTime(a,n,30,k);
//	cout<<res;
	return 0;
}

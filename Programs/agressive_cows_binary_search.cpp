#include<bits/stdc++.h>
using namespace std;

bool findres(int a[],int mid,int n,int c){
	int count=1,x=a[0],i;
	for(int i=1;i<n;i++){
			if(count==c)
				return true;
			if(a[i]-x>=mid)
			{
				count++;
				x=a[i];
			}
	}
	if(count == c)
		return true;
	return false;
}

int binarySearch(int dist[],int a[],int n,int max,int c){
	int beg=0,end=max-1,mid,ret=-1;
	bool res;
	while(beg<=end){
		mid=(beg+end)/2;
		res=findres(a,mid,n,c);
		if(res == 1){
			if(mid>ret)
				ret=mid;
			beg=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return ret;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,c,i;
	cin>>t;
	while(t--){
		cin>>n>>c;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int first=a[0],last=a[n-1],max=last-first,result;
		int dist[max];
		for(int i=0;i<max;i++)
		{
			dist[i]=i+1;
		}
		result = binarySearch(dist,a,n,max,c);
		cout<<result<<"\n";
	}
	
	return 0;
}

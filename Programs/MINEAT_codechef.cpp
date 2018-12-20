#include<iostream>
using namespace std;

bool isComplete(int a[],int h,int n,int k){
	int count=0,i=0,j,zeros=0,flag=0;
	int b[n];
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
	while(true){
		if(b[i]>=k){
			b[i]=b[i]-k;
			if(b[i]==0)
				zeros++;
			count++;
		}
		else if(b[i]<=k && b[i]!=0){
			b[i]=0;
			zeros++;
			count++;
		}
		if(count>h)
			return false;
		if(zeros == n-1)
			break;
		i=(i+1)%n;
	}
	return true;
}


int findK(int a[],int h,int n){
	int res,end=a[0],mid,beg=1,i,j;
	for(i=1;i<n;i++){
		if(end<a[i])
			end=a[i];
	}
	res=end+1;
	while(beg<=end){
		mid=(beg+end)/2;
		if(isComplete(a,h,n,mid)){
			if(mid<res)
				res=mid;
			end=mid-1;
		}
		else
			beg=mid+1;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int res,i,j,t,n,h;
	cin>>t;
	while(t--){
		cin>>n>>h;
		int a[n];
		for(i=0;i<n;i++) cin>>a[i];
		res=findK(a,h,n);
		cout<<res<<"\n";
//		cout<<isComplete(a,h,n,2);
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int binarySearchFirst(int a[],int n,int val){
	int beg=0,end=n-1,mid,res=end+1;
	while(beg<=end){
		mid=(beg+end)/2;
		if(a[mid]==val){
			if(mid<res)
				res=mid;
			end=mid-1;
		}
		else
			beg=mid+1;
	}
	return res;
}

int binarySearchLast(int a[],int n,int val){
	int beg=0,end=n-1,mid,res=-1;
	while(beg<=end){
		mid=(beg+end)/2;
		if(a[mid]==val){
			if(mid>res)
				res=mid;
			beg=mid+1;
		}
		else
			end=mid-1;
	}
	return res;
}

int main(){
	int n,val;
	cin>>n>>val;;
	int a[n],i,j;
	for(i=0;i<n;i++) cin>>a[i];
	int first=binarySearchFirst(a,n,val);
//	cout<<first<<"\n";
	int last=binarySearchLast(a,n,val);
//	cout<<last<<"\n";
	cout<<"No.of Occurences of "<<val<<" is "<<last-first+1;
	return 0;
}

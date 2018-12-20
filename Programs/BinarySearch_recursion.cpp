#include<iostream>
using namespace std;

int binarySearch(int a[],int beg,int end,int val){
	if(beg<=end){
		int mid = (beg+end)/2;
		if(a[mid] == val)
			return mid;
		else if(a[mid] > val)
			return binarySearch(a,beg,mid-1,val);
		else
			return binarySearch(a,mid+1,end,val);
	}
	return -1;
}


int main(){
	int n,val;
	cin>>n>>val;
	int a[n],i,j;
	for(i=0;i<n;i++)
		cin>>a[i];
	int res = binarySearch(a,0,n-1,val);
	cout<<res;
	return 0;
}

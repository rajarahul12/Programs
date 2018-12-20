#include<iostream>
using namespace std;

bool findDiff(int val,int a[],int n){
	int beg=0,end=n-1,mid;
	while(beg<=end){
		mid=(beg+end)/2;
		if(a[mid]==val)
			return true;
		else if(a[mid]>val)
			end=mid-1;
		else
			beg=mid+1;
	}
	return false;
}

int main(){
	
	int n,diff,i,j;
	cin>>n>>diff;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int flag=0;
	for(i=0;i<n;i++){
		if(findDiff(a[i]-diff,a,n)){
			cout<<"YES";
			flag=1;
			break;
		}
	}
	if(flag == 0)
		cout<<"NO";
	
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	int i,n,k;
	cin>>n>>k;
	int a[n];
	int res=0;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]>=a[k-1] && a[i]!=0)
			res++;
	}
	cout<<res;
	return 0;
}

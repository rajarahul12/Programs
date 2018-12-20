#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

int main(){
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i+=2){
		if(i>0 && a[i]<a[i-1])
			swap(a[i],a[i-1]);
		if(i<n-1 && a[i]<a[i+1])
			swap(a[i],a[i+1]);
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<"\n";
	return 0;
}

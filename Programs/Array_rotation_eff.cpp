#include<iostream>
using namespace std;
int main(){
	int n,d;
	cin>>n>>d;
	int a[n],temp[d],i;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(i<d){
			temp[i]=a[i];
		}
	}
	for(i=0;i<n-d;i++){
		a[i]=a[i+d];
	}
	for(i=n-d;i<n;i++){
		a[i]=temp[i-n+d];
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<ends;
	}
	cout<<"\n";
	return 0;
}

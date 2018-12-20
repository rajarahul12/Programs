#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],d,temp,i,j;
	cin>>d;
	d=d%n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<d;i++){
		temp=a[0];
		for(j=0;j<n-1;j++){
			a[j]=a[j+1];
		}
		a[n-1]=temp;
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

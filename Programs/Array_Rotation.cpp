#include<iostream>
using namespace std;
int main(){
	int a[5],d;
	cin>>d;
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	int b[d];
	for(int i=0;i<d;i++){
		b[i]=a[i];
	}
	for(int i=0;i<5-d;i++){
		a[i]=a[i+d];
	}
	for(int i=d+1;i<5;i++){
		a[i]=b[i-d-1];
	}
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	
	
}

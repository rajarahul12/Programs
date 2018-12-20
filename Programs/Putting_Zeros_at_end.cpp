#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],i,j,temp;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n-i;i++){
		for(j=i+1;j<n;j++){
			if(a[i] == 0){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<ends;
	}
	cout<<"\n";
	return 0;
} 

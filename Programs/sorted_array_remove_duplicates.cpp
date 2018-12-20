#include<iostream>
using namespace std;

int removeDuplicates(int a[],int n){
	int j=0;
	for(int i=0;i<n-1;i++){
		if(a[i]!=a[i+1])
			a[j++] = a[i];
	}
	a[j++] = a[n-1];
	return j;
}

int main(){
	int a[10]={1,2,2,3,3,3,3,4,4,4};
	int n=removeDuplicates(a,10);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}

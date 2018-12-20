#include<iostream>
using namespace std;

void reverse(int a[],int begin,int end){
	for(int i=begin;i<=end;i++){
		int temp=a[begin];
		a[begin]=a[end];
		a[end]=temp;
		begin++;
		end--;
	}
}

int main(){
	int a[5]={1,2,3,4,5},n=sizeof(a)/sizeof(a[0]),i,d;
	cin>>d;
	d=d%n;
	reverse(a,0,d-1);
	reverse(a,d,n-1);
	reverse(a,0,n-1);
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

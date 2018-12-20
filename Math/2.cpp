#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}

int main(){
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int first=a[0];
	for(i=1;i<n;i++){
		first=gcd(first,a[i]);
	}
	cout<<first;
	return 0;
}

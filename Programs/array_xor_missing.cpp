#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n-1];
	for(int i=0;i<n-1;i++)
		cin>>a[i];
		
	int i,j,xor1=0,xor2=0;
	for(i=1;i<=n;i++)
		xor1 ^= i;
	
	for(i=0;i<n-1;i++)
		xor2 ^= a[i];
	
	int res = xor1 ^ xor2;
	cout<<res;
	return 0;
}

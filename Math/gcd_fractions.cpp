#include<iostream>
using namespace std;

int gcd(int a,int b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}

int main(){
	int a[]={1,2,5},b[]={2,1,6},size=sizeof(a)/sizeof(a[0]);
	int num=1,den=1;
	for(int i=0;i<size;i++){
		num *= a[i];
		den *= b[i];
	}
	int GCD = gcd(num,den);
	num /= GCD;
	den /= GCD;
	cout<<num<<"/"<<den;
}

#include<iostream>
using namespace std;


int pow(int x,int n){
	int res;
	if(n == 1)
		return x;
	res=pow(x,n/2);
	if(n%2 == 0)
		return res*res;
	else
		return x*res*res;
}

int main(){
	int x=5,n=4;
	int res = pow(x,n);
	cout<<res;
	//Using loop
	int result=1;
	while(n>0){
		if(n&1)
			result=result*x;
		n=n>>1;
		x=x*x;
	}
	cout<<"\n"<<result;
	// x^n % p
	int p=2;
	result=1;
	while(n>0){
		if(n&1)
			result=result*(x%p);
		n=n>>1;
		x=(x*x)%p;
	}
	cout<<"\n"<<result%p;
}

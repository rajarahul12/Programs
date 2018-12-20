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
	int a=5,b=2;
	int res = pow(a,b);
	cout<<res;
}

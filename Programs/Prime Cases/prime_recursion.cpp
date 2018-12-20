#include<iostream>
using namespace std;

bool isPrime(int n,int i=2){
	if(n<=1)
		return false;
	if(n%i == 0)
		return false;
	if(i*i > n)
		return true;
	return isPrime(n,i+1);
}

int main(){
	int n;
	cin>>n;
	isPrime(n) ? cout<<"true" : cout<<"false";
	return 0;
}


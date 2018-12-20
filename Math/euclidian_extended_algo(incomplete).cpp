//Extended euclidian method a,b must be relatively prime
// ax+by = 1
#include<iostream>
using namespace std;

int gcd(int a,int b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}

int main(){
	int a,b;
	cin>>a>>b;
	gcd(a,b);
	return 0;
}

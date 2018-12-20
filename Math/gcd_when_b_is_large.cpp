#include<iostream>
#include<string>
using namespace std;

int reduceb(int a,string b){
	int res=0,i=0;
	for(i=0;i<b.length();i++){
		res = ((res*10)+b[i] - '0')%a;
	}
	return res;
}

int gcd(int a, int b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}

int largeGCD(int a,string b){
	int reduced=reduceb(a,b);
	return gcd(a,reduced);
}

int main(){
	int a;
	cin>>a;
	string s;
	cin>>s;
	int GCD = largeGCD(a,s);
	cout<<GCD;
}

#include<iostream>
using namespace std;

int count = 1;

int getpow(int a,int b){
	if(count!=b/2){
		count++;
		return a*getpow(a,b);
	}
}

int findpow(int a,int b){
	int half = getpow(a,b);
	return half;
}

int main(){
	int a=5,b=10;
	int res = findpow(a,b);
	cout<<res;
}

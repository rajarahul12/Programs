#include<iostream>
#include<math.h>
using namespace std;

void findPrimeFactors(int n){
	int count=0;
	while(n%2 == 0){
		count++;
		n=n/2;
	}
	for(int i=3;i*i<=n;i=i+2){
		while(n%i == 0){
			count++;
			n=n/i;
		}	
	}
	cout<<count;
}

int main(){
	int n;
	cin>>n;
	findPrimeFactors(n);
}

// x=i^2 +1
// if the greatest prime factor of x is > 2*i then 'i' is called a stromen number

#include<iostream>

using namespace std;

int findGreatestPrimeFactor(int n){
	int pf=n,flag=0;
	if(n%2==0){
		pf=2;
		n=n/2;
		while(n%2==0)
			n=n/2;
	}
	for(int i=3;i<=n;i+=2){
		flag=1;
		if(n%i==0){
			n=n/i;
			pf=i;
			while(n%i==0)
				n=n/i;
		}
	}
	return pf;
}

int main(){
	int count=0;
	int n=2;
	while(count<15){
		int pf=findGreatestPrimeFactor(n*n+1);
		if(pf>=2*n){
			count++;
			cout<<n<<"\t";
		}
		n++;
	}
	return 0;
}

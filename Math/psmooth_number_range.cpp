#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false)
using namespace std;

int findLargestFactor(int n) 
{
	int maxPrime = -1; 
	while (n % 2 == 0) { 
		maxPrime = 2; 
		n >>= 1;
	}
	for (int i = 3; i <= sqrt(n); i += 2) { 
		while (n % i == 0) { 
			maxPrime = i; 
			n = n/i; 
		} 
	} 
	if (n > 2) 
		maxPrime = n; 
	return maxPrime; 
} 


int main(){
	FAST;
	cin.tie(NULL);
	int p,factor;
	cin>>p;
	factor=findLargestFactor(p);
	if(factor<=p)
		cout<<"YES";
	return 0;
}

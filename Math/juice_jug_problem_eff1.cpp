#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[32],i=32-1;
		memset(a,0,sizeof(a));
		int temp=n;
		while(n>0){
			a[i]=n%2;
			n=n/2;
			i--;
		}
		for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
			if(k>1){
				if(a[i]==1){
					a[i]=0;
					k--;
				}
			}
		}
		
	}
	return 0;
}

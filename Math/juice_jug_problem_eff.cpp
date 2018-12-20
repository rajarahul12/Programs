#include<iostream>
using namespace std;

int main(){
	unsigned int n,k,l,t;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>t;
	while(t--){
		cin>>n>>l;
		k=l;
		unsigned int mask=1;
		mask=mask<<31;
		while(k>1 && n>1){
			unsigned int x=mask&n;
			if(!x){
				mask=mask>>1;
			}
			else{
				mask=~mask;
				n=n&mask;
				mask=~mask;
				mask=mask>>1;
				k--;
			}
		}
		if(!(n&n-1)){
			cout<<0<<"\n";
		}
		else{
			mask=1;
			mask=mask<<31;
			while(true){
				unsigned int x=mask&n;
				if(!x){
					mask=mask>>1;
				}
				else{
					mask=mask<<1;
					break;
				}
				
			}
			cout<<mask-n<<"\n";
		}
	}
	return 0;
}

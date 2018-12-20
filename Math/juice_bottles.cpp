#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,count=0,extra,i;
	cin>>n>>k;
	while(count<k-1){
		for(i=n;i>=2;i--){
			if(!(i&(i-1))){
				n=n-i;
				count++;
				break;
			}
		}
	}
	int j=n;
	while(true){
		if((j&(j-1)))
			j++;
		else{
			extra=j-n;
			break;
		}
	}
	cout<<extra<<"\n";
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j,t,sp,ep,n;
	cin>>t;
	while(t--){
		cin>>sp>>ep>>n;
		int a[n],c[n-1],sum=0;
		for(i=0;i<n;i++){
			cin>>a[i];	
		}
		for(i=0;i<n-1;i++) cin>>c[i];
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(a[i]==a[j])
					c[j-1]=0;
			}
		}
		for(i=0;i<n-1;i++){
			sum+=c[i];
		}
		cout<<sum<<"\n";
	}
	return 0;
}

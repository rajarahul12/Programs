#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n],i,j,indexes[n];
	for(i=0;i<n;i++) cin>>a[i];
	indexes[0]=1;
	for(i=1;i<n;i++){
		indexes[i]=1;
		for(j=0;j<i;j++){
			if(a[i]>a[j] && indexes[i]<indexes[j]+1){
				indexes[i]=indexes[j]+1;
			}
		}
	}
	int min=indexes[0];
	for(i=1;i<n;i++){
		if(min<indexes[i])
			min=indexes[i];
	}
	cout<<min;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int findLen(int a[],int n){
	int b[n];
	b[0]=1;
	for(int i=1;i<n;i++){
		b[i]=1;
		for(int j=0;j<i;j++){
			if(a[i]>a[j] && b[j]+1 > b[i] )
				b[i]=b[j]+1;
		}
	}
	int max=b[0];
	for(int i=1;i<n;i++){
		if(max<b[i])
			max=b[i];
	}
	return max;
}

int main(){
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
		cin>>a[i];
	int len=findLen(a,n);
	cout<<len<<"\n";
	return 0;
}

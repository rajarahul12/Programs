#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x=0;
	cin>>n;
	int a[n][n],i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			a[i][j]=++x;
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			int temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	}
	for(i=0;i<n;i++){
		x=n-1;
		for(j=0;j<n/2;j++){
			int temp=a[i][x];
			a[i][x]=a[i][j];
			a[i][j]=temp;
			x--;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}

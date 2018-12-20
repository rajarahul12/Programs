#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n,i,j,k;
	cin>>m>>n;
	int a[m][n],b[n][m],mul[m][m];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
			b[j][i]=a[i][j];
		}
	}
	int sum=0;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			for(k=0;k<n;k++)
				sum += a[i][k]*b[k][j];
			mul[i][j] = sum;
			sum=0;
		}
	}
	
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++)
			cout<<mul[i][j]<<"\t";
		cout<<"\n";
	}
	return 0;
}

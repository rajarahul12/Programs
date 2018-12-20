#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n,i,j;
	cin>>m>>n;
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			cin>>a[i][j];
	}
	int k=0,l=0;
	vector <int> v;
	while(k<m && l<n){
		for(i=l;i<n;i++){
			v.push_back(a[k][i]);
		}
		k++;
		for(i=k;i<m;i++){
			v.push_back(a[i][n-1]);
		}
		n--;
		if(k<m){
			for(i=n-1;i>=l;i--){
				v.push_back(a[m-1][i]);
			}
			m--;
		}
		if(l<n){
			for(i=m-1;i>=k;i--){
				v.push_back(a[i][l]);
			}
			l++;
		}
	}
	for(i=0;i<v.size();i++)
		cout<<v[i]<<"\n";
	return 0;
}

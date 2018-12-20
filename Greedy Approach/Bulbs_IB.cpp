#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
		cin>>a[i];
	int j=0,count=0;
	while(a[j]!=0)
		j++;
	for(i=j;i<n;i++){
		if(i==0)
			count++;
		else if(a[i]==0 && a[i-1]!=0)
			count++;
		else if(a[i]==1 && a[i-1]!=1)
			count++;
	}
	cout<<count<<"\n";
}

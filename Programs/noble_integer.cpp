#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}

int main(){
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n,cmp);
	for(i=0;i<n;i++){
		if(a[i]==a[i+1])
			continue;
		if(i==a[i])
			cout<<a[i]<<"\n";
	}
	return 0;
}

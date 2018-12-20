#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
		cin>>a[i];
	int j=n-1;
	i=0;
	while(i<=j){
		if(a[i]<=a[j]){
			cout<<j-i<<"\n";
			i++;
		}
		else
			j--;
	}
	return 0;
}

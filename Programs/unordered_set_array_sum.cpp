#include<bits/stdc++.h>
using namespace std;



int main(){
	int i,j=0,n,sum;
	cin>>n>>sum;
	int a[n];
	for(i=0;i<n;i++) cin>>a[i];
	unordered_set<int> intSet;
	for(i=0;i<n;i++){
		if(intSet.find(a[i])!=intSet.end()){
			j=1;
			break;			
		}
		intSet.insert(sum-a[i]);
	}
	if(j==1)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}

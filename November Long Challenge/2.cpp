#include<bits/stdc++.h>
using namespace std;

bool findLoc(int a[],int val,int n){
	int i;
	for(i=1;i<=n;i++){
		if(a[i]==val)
			return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,i,j;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n+1],loc1=0,loc2=0,flag=0;
		for(i=1;i<=n;i++)
			cin>>a[i];
		for(i=1;i<=n;i++){
			for(j=i+1;j<=n;j++){
				if(a[i]==a[j]){
					loc1=i;
					loc2=j;
					flag=1;
					break;
				}
			}
		}
		if(flag == 1){
			bool res1=findLoc(a,loc1,n),res2=findLoc(a,loc2,n);
			if(res1&res2)
				cout<<"Truly Happy\n";
			else
				cout<<"Poor Chef\n";
		}
		else{
			cout<<"Poor Chef\n";
		}
	}
	return 0;
}

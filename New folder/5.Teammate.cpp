#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,t,i,j,x,y,count;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		count=0;
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n,cmp);
		x=a[0];
		y=a[1];
		if(x==y){
			for(i=1;i<n;i++){
				if(a[i]==x)
					count++;
				else
					break;
			}
		}
		else if(x>y){
			for(i=1;i<n;i++){
				if(a[i]==y)
					count++;
				else
					break;
			}
		}
		cout<<count%1000000007<<"\n";
	}
	return 0;
}

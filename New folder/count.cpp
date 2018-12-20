#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k,i;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n],count=0;
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n,cmp);
		int num=a[k-1];
		for(int i=0;i<n;i++)
		{
			if(a[i]>=num)
				count++;
			else
			 break;
		}
		cout<<count<<"\n";
	}
	return 0;
}

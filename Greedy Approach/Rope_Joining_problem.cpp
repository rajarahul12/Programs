#include<bits/stdc++.h>
using namespace std;

int findMin(int a[],int n){
	int i,res=a[0]+a[1],temp;
	stack<int> s;
	s.push(res);
	for(i=2;i<n;i++){
//		cout<<res<<"\n";
//		temp=res;
		res+=a[i];
		s.push(res);
	}
	
	res=0;
	while(!s.empty()){
		res+=s.top();
		s.pop();
	}
	
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,i,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	
	sort(a,a+n);
	
	int res=findMin(a,n);
	cout<<res<<"\n";
	return 0;
}

#include<bits/stdc++.h>
#define INPUT ios_base::sync_with_stdio(false);
#include<vector>
using namespace std;

int main(){
	INPUT;
	cin.tie(NULL);
	vector <int> v;
	int n,i;
	cin>>n;
	for(i=2;i<=n;i+=2){
		if(i&(i-1) ==0)
			v.push_back(i);
	}
	int l=0,r=v.size()-1;
	while(true){
		if(v[l]+v[r]>n)
			r--;
		
	}
	return 0;
}

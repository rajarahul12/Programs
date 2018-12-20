#include<bits/stdc++.h>
using namespace std;


bool sum_semi(int n){
	int i,j;
	bool seive[(n/2)+1];
	memset(seive,true,sizeof(seive));
	seive[0]=false;
	seive[1]=false;
	for(i=2;i*i<=n;i++){
		if(seive[i]){
			for(j=i*2;j<=n/2;j+=i)
				seive[j]=false;
		}
	}
	vector <int> v;
	vector <int> p;
	for(i=0;i<=n/2;i++){
		if(seive[i])
			v.push_back(i);
	}
	int res;
	for(i=0;i<v.size();i++){
		for(j=i+1;j<v.size();j++){
			res=v[i]*v[j];
			if(res<=n)
				p.push_back(res);	
		}
	}
	v.clear();
	for(i=0;i<p.size();i++){
		for(j=i;j<p.size();j++)
		{
			res=p[i]+p[j];
			if(res == n)
				return true;
		}
	}
	p.clear();
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		if(sum_semi(n))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

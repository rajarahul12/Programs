#include<bits/stdc++.h>
using namespace std;

struct Processes{
	int at,ft;
};

bool cmp(Processes a,Processes b){
	return a.ft<b.ft;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,i;
	cin>>n;
	Processes p[n];
	for(i=0;i<n;i++){
		cin>>p[i].at>>p[i].ft;
	}
	sort(p,p+n,cmp);
	int count = 1;
	int x=p[0].ft;
	for(i=1;i<n;i++){
		if(p[i].at>=x){
			count++;
			x=p[i].ft;
		}
	}
	cout<<count-1;
	return 0;
}

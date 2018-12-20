#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	unsigned int x=1,y=x<<31;
	int count=0,res=0,p=0;
	while(x<y){
		for(i=0;i<n;i++){
			if(a[i]&x)
				count++;
		}
		if(count%3 != 0)
			res+=pow(2,p);
		p++;
		count=0;
		x=x<<1;
	}
	cout<<res<<"\n";
	return 0;
}

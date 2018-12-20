#include<iostream>
using namespace std;
#define FOR(i,c,it) for(i=0;i<n;i++)
#define FAST ios_base::sync_with_stdio(false)

int main(){
	cin.tie(NULL);
	FAST;
	int i,n,count=0,f1,f2,f3;
	cin>>n;
	FOR(i,c,it)
	{
		cin>>f1>>f2>>f3;
		if((f1==1 && f2 ==1) || (f3==1 && f2 ==1) || (f1==1 && f3 ==1))
			count++;
	}
	cout<<count;
	return 0;
}

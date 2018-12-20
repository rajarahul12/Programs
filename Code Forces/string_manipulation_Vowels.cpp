#include<iostream>
using namespace std;
#define FOR for(i=0;i<n;i++)
#define FAST ios_base::sync_with_stdio(false)

int main(){
	cin.tie(NULL);
	FAST;
	string a;
	cin>>a;
	int i,n = a.length();
	FOR{
		if(a[i] == 64) 
			a[i]="\0";
	}
	cout<<a;
	return 0;
}

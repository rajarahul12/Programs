#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);
using namespace std;

int main(){
	int n,x=0;
	string s;
	cin>>n;
	while(n--){
		cin>>s;
		if(s[0] == 43 || s[s.length()-1] == 43)
			x+=1;
		else if(s[0] == 45 || s[s.length()-1] == 45)
			x-=1;
	}
	cout<<x;
	return 0;
}

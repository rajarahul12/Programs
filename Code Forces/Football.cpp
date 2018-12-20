#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	getline(cin,s);
	int count=1,len=s.length(),i,flag=0;
	char c=s[0];
	for(i=1;i<len;i++){
		if(count >=7 ){
			flag=1;
			break;
		}
		if(c == s[i])
			count++;
		else{
			count=1;
			c=s[i];
		}
	}
	if(count >= 7)
		cout<<"YES";
	else if(flag == 1)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n=s.length(),index=-1,i;
	for(i=0;i<n;i++){
		if(s[i]>=65 && s[i]<=90){
			index=i;
			break;
		}
	}
	if(index!=-1){
	int count=0;
	for(i=index;i<n;i++){
		if(s[i]==s[index])
			count++;
	}
	cout<<count;
	}
	return 0;
}

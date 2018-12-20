#include<bits/stdc++.h>
using namespace std;

int main(){
	string t,p;
	cin>>t;
	cin>>p;
	int lent = t.length(),lenp=p.length();
	vector<int> indexes;
	int i,j,count=0;
	for(i=0;i<lent;i++){
		count=0;
		for(j=0;j<lenp;j++){
			if(t[i+j]==p[j] || t[i+j]+32==p[j] || t[i+j]==p[j]+32)
				count++;
			else
				break;
		}
		if(count==lenp)
			indexes.push_back(i);
	}
	if(indexes.size()<1)
		cout<<"-1"<<" ";
	else{
		for(i=0;i<indexes.size();i++)
			cout<<indexes[i]<<" ";	
	}
	return 0;
}

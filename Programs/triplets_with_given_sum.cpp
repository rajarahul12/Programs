#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
	int n,i;
	cin>>n;
	string s[n];
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s,s+n);
	
	if(n>=3){
		int a=0,b=1,c=n-1;
		while(a<c && b<c){
			double temp= ::atof(s[a].c_str()) + ::atof(s[b].c_str()) + ::atof(s[c].c_str());
			if(temp>1 && temp<2){
				cout<<1<<"\n";
				break;
			}
			else if(temp<1){
				a++;
				b++;
			}
			else if(temp>2){
				c--;
			}
		}
	}
}

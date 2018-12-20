#include<iostream>
#include<string>
using namespace std;

int min(int a,int b,int c){
	if(a<b){
		if(a<c)
			return a;
		else
			return c;
	}
	else if(a>b){
		if(b<c)
			return b;
		else
			return c;
	}
}

int main(){
	string s1,s2;
	int t;
	cin>>t;
	while(t--){
	cin>>s1>>s2;
	int len1=s1.length(),len2=s2.length(),i,j;
	int mde[len1+1][len2+1];
	for(i=0;i<=len1;i++){
		for(j=0;j<=len2;j++){
			if(i==0)
				mde[i][j]=j;
			if(j==0)
				mde[i][j]=i;
			else if(s1[i-1]==s2[j-1])
				mde[i][j]=mde[i-1][j-1];
			else
				mde[i][j]=min(mde[i-1][j],mde[i-1][j-1],mde[i][j-1])+1;				
		}
	}
	cout<<mde[len1][len2]<<"\n";
	}
	return 0;
}

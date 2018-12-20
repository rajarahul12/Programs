#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int x=s1.length();
	char a[x+1],b[x+1];
	strcpy(a, s1.c_str());
	strcpy(b, s2.c_str());
	for(int i=0;i<x;i++){
		if(a[i]>64 && a[i]<=90)
			a[i]+=32;
		if(b[i]>64 && b[i]<=90)
			b[i]+=32;
	}
	int res = strcmp(a,b);
	if(res == 0)
		cout<<0;
	else if(res > 0)
		cout<<1;
	else
		cout<<-1;
//	int i,c1=0,c2=0;
//	for(i=0;i<s1.length();i++){
//		if(s1[i]>64 && s1[i]<=90)
//			c1 += s1[i]+32;
//		else
//			c1+=s1[i];
//			
//		if(s2[i]>64 && s2[i]<=90)
//			c2 += s2[i]+32;
//		else
//			c2+=s2[i];
//	}
//	
//	cout<<c1<<"\n"<<c2<<"\n";
//	if(c1 == c2){
//		cout<<0;
//	}
//	else if(c1>c2)
//		cout<<1;
//	else
//		cout<<-1;
	return 0;
}

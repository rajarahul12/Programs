#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

string cmp(string a,string b){
	string c=a+b;
	string d=b+a;
	return c>d ? c : d;
}

int main(){
	int a[5]={3,30,34,5,9};
	char *intStr;
	int x=a[0];
	itoa(x,intStr,10);
	string s = string(intStr);
	cout<<s<<"\n";
	for(int i=1;i<5;i++){
		x=a[i];
		itoa(x,intStr,10);
		string s1 = string(intStr);
		cout<<s1<<"\n";
		s=cmp(s,s1);
	}
	cout<<s;
	return 0;
}

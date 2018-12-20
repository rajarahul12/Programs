#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int main(){
	int a=5;
	char *intStr;
	itoa(a,intStr,10);
	string s = string(intStr);
	cout<<s;
//	int x=stoi(s);
//	cout<<x;
	return 0;
}

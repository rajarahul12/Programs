#include<iostream>
#include<string.h>
#include<stack>
#include<stdlib.h>
using namespace std;

void str_eval(char s[],int length){
	stack <int>chars;
	int x,res,val;
	for(int i=0;i<length;i++){
//		cout<<s[i]<<"\n";
		if(isalpha(s[i])){
//			cout<<s[i]-64<<ends;
			val=s[i]-64;
			chars.push(val);			
		}
		if(isdigit(s[i])){
//			cout<<s[i]-48<<"\n";
//			cout<<chars.<<"\n";
			x=chars.top();
			chars.pop();
			res=x*(s[i]-48);
			while(!chars.empty()){
				x=chars.top();
				chars.pop();
				res =res+x;
			}
			chars.push(res);
		}
	}
	cout<<chars.top();
}

int main(){
	char s[]="AB2C3";
	int len=strlen(s);
	str_eval(s,len);
}	

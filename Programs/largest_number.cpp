#include<bits/stdc++.h>
using namespace std;

bool cmp(string a,string b){
    string c = a+b;
    string d = b+a;
    
    if(c > d){
    	cout<<c<<"\n";
        return true;
    }
    cout<<d<<"\n";
    return false;
}

int main(){
	string s[5]={"3","30","34","5","9"};
	sort(s, s+5, cmp);
//	for(int i=0;i<5;i++)
//		cout<<s[i]<<"\n";
    string res="";
    for(int i = 0; i < 5; i++){
        res = res + (s[i]);
    }
    if(res[0]==48)
        cout<<"0";
    else
        cout<<res;
	return 0;
}

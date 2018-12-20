#include<bits/stdc++.h>
using namespace std;

bool cmp(string a,string b){
	string c=a+b;
	string d=b+a
    return c>d;
}

int main(){
    int n;
    cin>>n;
    int a[n],i;
    vector <string> v;
    for(i=0;i<n;i++){
        cin>>a[i];
        v.push_back(to_string(a[i])[0]);
    }
    sort(v.begin(),v.end(),cmp);
    string s="";
    for(i=0;i<v.size()-2;i++){
        s+=v[i];
    }
    s=s+v[v.size()-1];
    s=s+v[v.size()-2];
    cout<<s;
    return 0;
}

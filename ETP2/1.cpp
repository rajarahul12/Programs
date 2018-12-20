#include<bits/stdc++.h>
using namespace std;


int main(){
    string s1,s2;
    int t;
    cin>>t;
    while(t--){
    int len1,len2,i,j;
    cin>>len1>>len2;
    cin>>s1>>s2;
    int mde[len1+1][len2+1];
    int edit=0,del=0;
    for(i=0;i<=len1;i++){
        for(j=0;j<=len2;j++){
            if(i==0 || j==0)
            	mde[i][j]=0;
            else if(s1[i-1]==s2[j-1])
                mde[i][j]=mde[i-1][j-1]+1;
            else{
            	mde[i][j]=max(mde[i-1][j],mde[i][j-1]);    
			}                
        }
    }
    cout<<len1-mde[len1][len2]<<"\n";
    cout<<len2-mde[len1][len2]<<" edit "<<(len1-mde[len1][len2])-(len2-mde[len1][len2])<<" delete\n";
    }
    return 0;
}

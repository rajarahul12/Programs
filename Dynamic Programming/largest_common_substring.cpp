#include<bits/stdc++.h>
#define FOR1 for(i=0;i<m;i++)
#define FOR2 for(j=0;j<n;j++)
#define FAST ios_base::sync_with_stdio(false)
using namespace std;

int max(int a, int b){
	return (a>b) ? a : b;
}

int main(){
	FAST;
	cin.tie(NULL);
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int m=s1.size(),n=s2.size(),i,j;
	int lcs[m][n],result=0;
	memset(lcs,0,sizeof(lcs));
	FOR1{
		FOR2{
			if(s1[i]==s2[j]){
				if(i==0 || j==0)
				{
					lcs[i][j]=1;
				}
				else{
					lcs[i][j] = 1+lcs[i-1][j-1];
					result = max(result,lcs[i][j]);
				}
			}
		}
	}
	cout<<result;
	return 0;
}

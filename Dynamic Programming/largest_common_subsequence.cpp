#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);

using namespace std;

int max(int a,int b)
{
	return (a>b) ? a :b;
}

int main(){
	FAST;
	cin.tie(NULL);
	int m,n,i,j;
	string a,b;
	getline(cin,a);
	getline(cin,b);
	m=a.length();
	n=b.length();
	int lcs[m+1][n+1];
//	memset(lcs,0,sizeof(lcs));
	for(i=0;i<=m;i++){
		for(j=0;j<=n;j++){
			if(i==0 || j==0){
				lcs[i][j]=0;				
			}
			else if(a[i-1]==b[j-1]){
				lcs[i][j]=1+lcs[i-1][j-1];				
			}
			else{
				lcs[i][j] = max(lcs[i][j-1],lcs[i-1][j]);				
			}
		}
	}
	cout<<"The largest common subsequence count is : "<<lcs[m][n];
	int index=lcs[m][n];
	char lcstr[index+1];
	lcstr[index]='\0';
	i=m;j=n;
	while(i>0 && j>0){
		if(a[i-1] == b[j-1]){
			lcstr[index-1]=a[i-1];
			i--;
			j--;
			index--;
		}
		else if (lcs[i-1][j] > lcs[i][j-1]) 
         i--; 
      	else
         j--;
	}
	cout<<"\nThe largest common subsequence is : "<<lcstr;
	return 0;
}

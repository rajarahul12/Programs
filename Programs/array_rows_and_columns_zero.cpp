#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j;
	cin>>n>>m;
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			cin>>a[i][j];
	}
	vector <int> row;
	vector <int> column;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i][j] == 0){
				if(row.size()==0 || row[row.size()-1]!=i)
					row.push_back(i);
				column.push_back(j);
			}
		}
	}
	
	for(i=0;i<row.size();i++)
		cout<<row[i]<<" ";
	
	cout<<"\n";
	
	for(i=0;i<column.size();i++)
		cout<<column[i]<<" ";
	
	cout<<"\n";
	
	for(i=0;i<row.size();i++){
		for(j=0;j<m;j++){
			a[row[i]][j]=0;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<column.size();j++)
			a[i][column[j]]=0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

vector < vector <int> > pascal(int row){
	vector<vector<int> > vec;
    if(row==0)
    {
        return vec;
    }
    vector<int> v;
    v.push_back(1);
    
    vec.push_back(v);
    
    for(int i=1;i<row;i++)
    {
        vector<int> v;
        v.push_back(1);
        
        for(int j=1;j<i;j++)
        {
            v.push_back(vec[i-1][j]+vec[i-1][j-1]);
        }
        v.push_back(1);
        vec.push_back(v);
    }
	return vec[row-1];
}

int main(){
	int row;
	cin>>row;
	vector < vector <int> > v;
	v=pascal(row);
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<v[i].size();j++)
			cout<<v[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}

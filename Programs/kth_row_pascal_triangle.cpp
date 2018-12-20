#include<bits/stdc++.h>
using namespace std;

vector < int> pascal(int row){
	
    if(row==0)
    {
        vector <int> v(row+1);
        v[0]=1;
        return v;
    }
    vector<vector<int> > vec;
    vector<int> v;
    v.push_back(1);
    
    vec.push_back(v);
    
    for(int i=1;i<=row;i++)
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
	return vec[row];
}

int main(){
	int row;
	cin>>row;
	vector < int > v;
	v=pascal(row);
	int i=v.size(),j;
	for(j=0;j<i;j++)
		cout<<v[j]<<" ";
	return 0;
}

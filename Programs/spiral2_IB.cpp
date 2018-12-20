#include<bits/stdc++.h>
using namespace std;


vector <int > spiralOrder(vector<vector<int> > &a) {
    int k=0,l=0,i,j,m=a.size(),n=a[0].size();
    vector <int> v;
    while(k<m && l<n){
        for(i=l;i<n;i++){
            v.push_back(a[k][i]);
        }
        k++;
        for(i=k;i<m;i++){
            v.push_back(a[i][n-1]);
        }
        n--;
        if(k<m){
            for(i=n-1;i>=l;i--){
                v.push_back(a[m-1][i]);
            }
            m--;
        }
        if(l<n){
            for(i=m-1;i>=k;i--){
                v.push_back(a[i][l]);
            }
            l++;
        }
    }
    return v;
}


int main(){
	int n;
	cin>>n;
	vector < vector <int > > a;
	int i,j,x=0;
	for(i=0;i<n;i++){
		vector <int> s;
		for(j=0;j<n;j++){
			s.push_back(++x);
		}
		a.push_back(s);
	}
	vector <int > v;
	v=spiralOrder(a);
	for(i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}	
	return 0;
}

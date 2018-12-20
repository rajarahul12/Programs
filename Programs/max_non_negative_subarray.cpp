#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int> maxset(vector<int> &a) {
    vector <ll> m;
    vector <int> l;
    vector < vector <int> >sub;
    vector<int> v;
    int length =0,n=a.size(),i;
    ll max=0,sum=0;
    for(i=0;i<n;i++){
        if(a[i]>=0){
            sum+=(ll)a[i];
            v.push_back(a[i]);
            length++;
        }
        else{
            if(length!=0){
	            m.push_back(max);
	            l.push_back(length);
	            for(int j=0;j<v.size();j++)
	            	cout<<v[j]<<" ";
	            cout<<"\n";
	            sub.push_back(v);
	            v.clear();
	            sum=0;
	            length=0;
	            max=0;
            }
        }
        if(max<sum)
            max=sum;
    }
    if(a[n-1]>=0){
        m.push_back(max);
        l.push_back(length);
        sub.push_back(v);
        v.clear();
    }
    
    for(int j=0;j<m.size();j++)
    	cout<<m[j]<<"\n";
    
    if(m.size() == 0)
        return v;
    
    if(m.size()==1)
        return sub[0];
    
    ll max1,max2;
	int ind1,ind2;
    if(m[0]>m[1]){
        max1=m[0];
        ind1=0;
        max2=m[1];
        ind2=1;
    }
    else{
        max1=m[1];
        ind1=1;
        max2=m[0];
        ind2=0;
    }
     
    for(i=2;i<m.size();i++){
        if(max1<m[i]){
            max2=max1;
            ind2=ind1;
            max1=m[i];
            ind1=i;
        }
        if(max2<m[i] && i!=ind1){
            max2=m[i];
            ind2=i;
        }
    }
    if(max1!=max2){
        return sub[ind1];
    }
    else{
        if(l[ind1]>=l[ind2])
            return sub[ind1];
        else
            return sub[ind2];
    }
}


int main(){
	int n,temp,i;
	cin>>n;
	vector <int> v;
	vector <int> res;
	for(i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	res=maxset(v);
	return 0;
}

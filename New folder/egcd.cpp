#include<bits/stdc++.h>
using namespace std;

int egcd(int a,int b,int &x,int &y){
	if(a==0){
		x=0;
		y=1;
		return b;
	}
	int x1,y1;
	int d=egcd(b%a,a,x1,y1);
	x=y1-(b/a)*x1;
	y=x1;
	return d;
}

void findprimeFactors(vector<int> &a,int n){
	int i,j;
	for(i=2;i*i<=n;i++){
		int j=0;
		while(n%i == 0)
		{
			n=n/i;
			if(j==0)
				a.push_back(i);
			j++;
		}
	}
}

int findcp(int gcd,int a,int b){
	
	vector <int> v;
	if(gcd == 1 || a==1 || b==1)
		return 0;
	
	int i,j,k,count=0;
	if(a>1)
	{
		findprimeFactors(v,a);
	}	
	if(b>1)
	{
		findprimeFactors(v,b);
	}
	if(gcd>1)
	{
		findprimeFactors(v,b);
	}
	int n=v.size();
	sort(v.begin(),v.end());
	for(i=0;i<v.size();i++){
		for(j=i+1;j<v.size();j++){
			if(v[i] == v[j])
				count++;
		}
		i=i+count;
	}
	
//	for(i=0;i<v1.size();i++)
//		cout<<v1[i]<<"\n";
	
	
	
	return count;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,a,b,count;
	cin>>n;
	while(n--){
		cin>>a>>b;
		int x,y,gcd;
		gcd=egcd(a,b,x,y);
//		cout<<x<<"\n"<<y<<"\n"<<gcd;
		count=findcp(gcd,x,y);
		cout<<count<<"\n";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll findMax(vector <ll> v){
	int max=v[0];
	for(int i=1;i<v.size();i++)
	{
		if(max<v[i])
			max=v[i];
	}
	
	return max;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll count=0,n,temp,k,i,j,x=INT_MIN;
	cin>>n>>k;
	stack <ll> rev;
	stack <ll> s;
	for(i=0;i<n;i++){
		cin>>temp;
		rev.push(temp);
	}
	
	if(k == 1 && n==1)
		cout<<"-1";
	else{
		while(!rev.empty()){
			temp=rev.top();
			s.push(temp);
			rev.pop();
		}
		
		if(k==1){
			s.pop();
			cout<<s.top();
		}
		else{
		vector <ll> maxe;
		while(count<k-1 && !s.empty()){
			x=s.top();
			maxe.push_back(x);
			s.pop();
			count++;
		}
		
		ll max=findMax(maxe);
		if(s.empty())
			cout<<max;
		else{
			
			
			
			if(s.top() <= x){
				if(x<=max)
					s.push(max);
				else
					s.push(x);
			}
			else
				s.pop();
			cout<<s.top();
			}}
	}
	return 0;
}

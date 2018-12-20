#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int c,i,j,t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n],sum,count=0,min=INT_MAX,loc=0;
		for(i=0;i<n;i++)  cin>>a[i];
		cin>>c;
		vector <int> v;
		for(i=0;i<n;i++){
			sum=a[i];
			count =1;
			if(i!=n-1){
				for(j=i+1;j<n;j++){
					if(sum+a[j]<=c){
						if(count==1)
							loc=j;
						count++;
						sum+=a[j];
					}
					if(sum==c){
						if(count<min)
							min=count;
						v.push_back(count);
						sum=a[i];
						count=1;
						j=loc+1;
					}
				}
			}
				
		}
		int ways=0;
		
		for(i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		cout<<"\n";
		
		for(i=0;i<v.size();i++){
			if(v[i]==min)
				ways++;
		}
		cout<<min<<" "<<ways<<"\n";
	}
	return 0;
}

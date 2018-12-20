#include<iostream>
using namespace std;

void findEquilibrium(int a[],int n,int sum){
	int left=0,i,right=sum-a[0];
	if(n==1)
		cout<<1<<" ";
	else if(n==2)
		cout<<-1<<" ";
	else{
	for(i=1;i<=n-2;i++){
		left=left+a[i-1];
		right=right-a[i];
		if(left == right)
		{
			cout<<(i+1)<<"\n";
			return;
		}
		}
		cout<<"-1"<<"\n";
		
	}
}

int main(){
	int t,n,i,sum;
	cin>>t;
	while(t--){
		sum=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		findEquilibrium(a,n,sum);
	}
	return 0;
}

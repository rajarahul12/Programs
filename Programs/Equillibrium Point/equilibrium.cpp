#include<iostream>
using namespace std;

int findEquilibrium(int a[],int n){
	if(n==1)
	 return 1;
	int left=0,mid=1,right=2,leftsum=a[left],rightsum=a[right],i;
	for(i=3;i<n;i++){
			if(leftsum == rightsum)
				return mid+1;
			else if(leftsum<rightsum){
				leftsum+=a[i];
				mid++;
				right++;
				rightsum=a[right];
				
			}
			else if(leftsum>rightsum){
				right++;
				rightsum+=a[right];
			}
			cout<<"i :"<<i<<" mid :"<<mid<<" leftsum :"<<leftsum<<" rightsum :"<<rightsum<<"\n";
	}
	return -1;
}

int main(){
	int t,n,i;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<findEquilibrium(a,n)<<"\n";
		
	}
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],b[n],i,j,diff,flag=0;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		for(i=0;i<n-2;i++){
			if(b[i]>a[i]){
				diff=b[i]-a[i];
				a[i]=a[i]+(diff);
				a[i+1]=a[i+1]+(diff*2);
				a[i+2]=a[i+2]+(diff*3);
			}
		}
		for(i=0;i<n;i++){
			if(a[i]!=b[i]){
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"NIE\n";
		else
			cout<<"TAK\n";
	}
	return 0;
}

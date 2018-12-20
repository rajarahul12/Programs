#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n = s.length(),i;
	int a[n];
	for(i=0;i<n;i++){
		if(s[i]==48)
			a[i]=1;
		else
			a[i]=-1;
	}
	int left=0,l=0,right=0,max=-2,sum=0;
	for(i=0;i<n;i++){
		sum+=a[i];
	
		if(sum<0){
			l=i+1;
			sum=0;
		}
		if(sum>max){
			max=sum;
			left=l;
			right=i;
		}
	}
	if(max<=0)
		cout<<"NONE"<<"\n";
	else
		cout<<left+1<<" "<<right+1<<"\n";
}

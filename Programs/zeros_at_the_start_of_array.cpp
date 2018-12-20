#include<iostream>
using namespace std;

int main(){
	int a[5]={2,1,0,0,6},i,temp,count=0;
	for(i=4;i>=0;i--){
		if(a[i] == 0)
			count++;
		else{
			temp=a[i+count];
			a[i+count]=a[i];
			a[i]=temp;
		}
	}
	for(i=0;i<5;i++)
		cout<<a[i];
	count=0;
	for(i=0;i<5;i++){
		if(a[i]== 0)
			count++;
		else{
			temp=a[i-count];
			a[i-count]=a[i];
			a[i]=temp;
		}
	}
	cout<<"\n";
	for(i=0;i<5;i++)
		cout<<a[i];
	return 0;
}

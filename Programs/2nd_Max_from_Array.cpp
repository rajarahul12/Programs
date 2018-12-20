#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],i,max1,max2;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	if(a[0] < a[1]){
		max1=a[1];
		max2=a[0];
	}
	else{
		max1=a[0];
		max2=a[1];
	}
	for(i=2;i<n;i++){
		if(max1<a[i]){
			max2=max1;
			max1=a[i];
		}
		else if(max2<a[i] && a[i]!=max1){
			max2=a[i];
		}
		
	}
	cout<<max1<<" "<<max2<<"\n";
	for(i=0;i<n;i++){
		if(a[i] == max1 || a[i] == max2){
			continue;
		}
		else{
			cout<<a[i]<<ends;
		}
	}
	return 0;
}

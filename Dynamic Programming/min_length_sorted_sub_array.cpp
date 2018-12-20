#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int i,j,start=-1,end=-1;
	for(i=0;i<n;i++) cin>>a[i];
	for(i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			start=i;
			break;
		}
	}
	for(j=n-1;j>0;j--){
		if(a[j]<a[j-1]){
			end=j;
			break;
		}
	}
	if(start==-1 && end ==-1)
		cout<<-1;
//	cout<<start<<" "<<end<<"\n";
	else{
	int s=start,e=end,min=a[s],max=a[e];
	for(i=start;i<=end;i++){
		if(min>a[i])
			min=a[i];
		if(max<a[i])
			max=a[i];
	}
//	cout<<min<<" "<<max<<"\n";
	for(i=0;i<start;i++){
		if(a[i]>min){
			s=i;
			break;
		}	
	}
	for(j=end+1;j<n;j++){
		if(a[j]<max){
			e=j;
		}	
	}
	cout<<s<<" "<<e<<"\n";
	}
	return 0;
}

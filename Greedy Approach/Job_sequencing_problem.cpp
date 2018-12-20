#include<bits/stdc++.h>
using namespace std;

struct Job{
	int id,li,ti;
};

bool cmp(Job a,Job b){
	return a.li*b.ti > b.li*a.ti;
}

void opt_seq(Job arr[],int n){
	for(int i=0;i<n;i++)
		cout<<arr[i].id<<" ";
}

int main(){
	Job arr[]={{1,2,4},{2,3,1000},{3,4,2},{4,1,5}};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n,cmp);
	opt_seq(arr,n);
	return 0;
}

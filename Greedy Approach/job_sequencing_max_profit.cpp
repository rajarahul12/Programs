#include<bits/stdc++.h>
using namespace std;

struct Job{
	int id,endtime,profit;
};

bool cmp(Job a,Job b){
	return a.profit>b.profit;
}

int main(){
	Job a[]={{1,2,16},{2,1,4},{3,1,2},{4,3,3}};
	int n=sizeof(a)/sizeof(a[0]),sum;
	sort(a,a+n,cmp);
	int i,j,seq[n];
	bool slots[n];
	memset(slots,false,sizeof(slots));
	for(i=0;i<n;i++){
		for(j=a[i].endtime-1;j>=0;j--){
			if(slots[j]==false){
				slots[j]=true;
				seq[j]=i;
				break;
			}
		}
	}
	for(i=0;i<n;i++){
		if(slots[i])
			cout<<a[seq[i]].id<<" ";
	}
	return 0;
}

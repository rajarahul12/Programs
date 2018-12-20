#include<iostream>
using namespace std;

int main(){
	int a[4]={1,3,5,6},
	beg=0,
	end=3,
	mid=(beg+end)/2,
	loc=-1,
	flag=0,
	val;
	cin>>val;
	while(beg<=end){
		if(a[mid]==val){
			loc=mid;
			break;
		}
		else if(a[mid]>val){
			end=mid-1;
			loc=mid;
		}
		else{
			beg=mid+1;
		}
		mid=(beg+end)/2;
	}
	if(flag == 1)
		cout<<loc;
	else
		cout<<loc+1;
}

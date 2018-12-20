#include<iostream>
#include<cstring>
using namespace std;
/*
bool found(int a[],int val){
	for(int i=0;i<5;i++){
		if(val==a[i])
			return true;
	}
	return false;
}*/

int main(){
	int a[]={1,2,3,0,6},t[6],i;
	memset(t,-1,sizeof(t));
	for(i=0;i<5;i++){
		t[a[i]] =a[i];
	}
//	for(i=0;i<=6;i++){
//		t[i]==1 ? t[i]=i : t[i]=-1;
//	}
	for(i=0;i<=6;i++){
		cout<<t[i]<<" ";
	}
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	int a[]={1,2,2,1,4,5,5};
	int ans=0;
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
		ans^=a[i];
	}
	cout<<ans;
}

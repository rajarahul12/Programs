// Find if gcd of all the elements in the array is present in the array
// or is there a number that divides all the numbers in the array
#include<iostream>
using namespace std;

int gcd(int a,int b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}

int main(){
	int a[]={2,4,6},n=sizeof(a)/sizeof(a[0]),first=a[0],ans=-1,i;
	for(i=0;i<n;i++){
		first=gcd(first,a[i]);
	}
	for(i=0;i<n;i++){
		if(first == a[i])
		{
			ans=first;
			break;
		}
	}
	cout<<ans;
}

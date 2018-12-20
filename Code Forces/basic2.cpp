#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,len;
	cin>>n;
	string arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		if(arr[i].length()>10)
			cout<<arr[i][0]<<arr[i].length()-2<<arr[i][arr[i].length()-1]<<"\n";
		else
			cout<<arr[i]<<"\n";
	}
	return 0;
}

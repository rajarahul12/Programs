#include<iostream>
#include<stack>
using namespace std;

void answer(int a[] , int n){
	stack <int> s;
	s.push(a[0]);
	for(int i=1;i<n;i++){
		while(!s.empty() && s.top()<a[i]){
			cout<<a[i]<<" ";
			s.pop();
		}
		s.push(a[i]);
	}
	while(!s.empty()){
		cout<<-1<<" ";
		s.pop();
	}
}

int main(){
	int a[]={1,2,3,4},n=sizeof(a)/sizeof(a[0]);
	answer(a,n);
	return 0;
}

#include<iostream>
#include<stack>
using namespace std;
stack <int> s;

void popMiddle(int n,int total){
	if(n==0 || total == n)
		return;
	int ele =s.top();
	s.pop();
	popMiddle(n,total+1);
	if(total != n/2)
	s.push(ele);
}

int main(){
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	popMiddle(s.size(),0);
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
}

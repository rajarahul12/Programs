#include<iostream>
#include<queue>
#include<stack>
using namespace std;

//Reversing the Queue
// 1. Using Stack
// 2. Using Recursion

void reverseQueue(queue <int> &Q){
	if(!Q.empty()){
		int val=Q.front();
		Q.pop();
		reverseQueue(Q);
		Q.push(val);
	}
		
}

int main(){
	queue <int> Q;
//	stack <int> s;
	for(int i=1;i<=10;i++){
		Q.push(i);
	}
	/*
	while(!Q.empty()){
		s.push(Q.front());
		Q.pop();
	}
	while(!s.empty()){
		Q.push(s.top());
		s.pop();
	}
	while(!Q.empty()){
		cout<<Q.front()<<ends;
		Q.pop();
	}
//	cout<<endl<<Q.size()<<endl;
	*/
	reverseQueue(Q);
	while(!Q.empty()){
		cout<<Q.front()<<ends;
		Q.pop();
	}
	return 0;
}

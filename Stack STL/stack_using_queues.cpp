#include<bits/stdc++.h>
using namespace std;

queue<int> q1;//Used for pushing
queue<int> q2;//Used for pop

void push(int data){
	q1.push(data);
	while(!q2.empty()){
		q1.push(q2.front());
		q2.pop();
	}
	queue <int> temp;
	temp=q1;
	q1=q2;
	q2=temp;
}

int pop(){
	if(q2.empty())
		return INT_MIN;
	else{
		int res=q2.front();
		q2.pop();
		return res;
	}
}

int main(){
	int choice,data,res;
	while(true){
		cout<<"\nEnter the choice:\n1.PUSH\n2.POP\n3.EXIT\n\n";		
		cin>>choice;
		cout<<"\n";
		switch(choice){
			case 1:
				cin>>data;
				push(data);
				break;
			case 2:
				res = pop();
				if(res == INT_MIN)
					cout<<"Underflow\n";
				else
					cout<<"Popped Element: "<<res<<"\n";
			 	break;
			case 3:
				exit(0);
		}
	}
	return 0;
}

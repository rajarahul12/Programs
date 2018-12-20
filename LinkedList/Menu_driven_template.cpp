#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

node *front=NULL;
node *last=NULL;

void insertBack(int val){
	node *n=new node;
	n->data=val;
	n->next=NULL;
	if(front == NULL){
		front=last=n;
	}
	else{
		last->next=n;
		last=n;
	}
}

void insetFront(int val){
	node *n=new node;
	n->data=val;
	n->next=NULL;
	if(front==NULL){
		front=last=n;
	}
	else{
		n->next=front;
		front=n;
	}
}

int deleteStart(){
	if(front==NULL)
		return INT_MIN;
	int temp=front->data;
	node *t=front;
	front=front->next;
	delete t;
	return temp;
}

int deleteBack(){
	if(front==NULL)
		return INT_MIN;
	else{
		node *temp=last;
		
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	int choice,val;
	while(true){
	cout<<"\n ENTER THE CHOICE \n";
	cout<<"1.INSERT AT THE START\n";
	cout<<"2.INSERT AT THE END\n";
	cout<<"3.DELETE AT THE START\n";
	cout<<"4.DELETE AT THE END\n";
	cout<<"5.EXIT\n";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"\nEnter the value : ";
			cin>>data;
			insertFront(data);
			break;
		case 2:
			cout<<"\nEnter the value : ";
			cin>>data;
			insertBack(data);
			break;
		case 3:
			int x=deleteStart();
			if(x==INT_MIN)
				cout<<"\nUnderflow";
			else
				cout<<"\nDeleted Node : "<<x;
			break;
		case 4:
			int x=deleteBack();
			if(x==INT_MIN)
				cout<<"\nUnderflow";
			else
				cout<<"\nDeleted Node : "<<x;
			break;
		case 5:
			exit(0);
	}
	}
	return 0;
}

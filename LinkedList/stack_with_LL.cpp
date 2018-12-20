#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	node *next;
};

node *f=NULL,*l=NULL;

void pushElement(int num){
	node *n=new node;
	n->data=num;
	n->next=NULL;
	if(f==NULL){
		f=n;
		l=n;
	}
	else{
		l->next=n;
		l=n;
	}
}

void popElement(){
	int x;
	node *temp;
	if(l==NULL){
		cout<<"Underflow";
		return;
	}
	else{
		node *p=f;
		while(p!=NULL){
		if(p==l){
			cout<<p->data<<"\n";
			temp->next=l->next;
			l=temp;
			break;
		}
		else{
			temp=p;
			p=p->next;
		}
		}
		
	}
}

int main(){
	int num;
	while(1){
	cout<<"Enter the choice\n";
	int ch;
	cout<<"1.PUSH\n";
	cout<<"2.POP\n";
	cout<<"3.TOP\n";
	cout<<"4.EXIT\n";
	cin>>ch;
	switch(ch){
		case 1:
			cout<<"Enter the element to push\n";
			cin>>num;
			pushElement(num);
			break;
		case 2:
			cout<<"POP : ";
			popElement();
			break;
		case 3:
			cout<<"The top Element : ";
			cout<<l->data<<"\n";
			break;
		case 4:
			exit(0);
	}
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

node *head1=NULL,*tail1=NULL,*head2=NULL,*tail2=NULL;

void Node(int val){
	node *n=new node;
	n->data=val;
	n->next=NULL;
	if(head1==NULL){
		head1=n;
		tail1=n;
	}
	else{
		tail1->next=n;
		tail1=n;
	}
}

void Node2(int val){
	node *n=new node;
	n->data=val;
	n->next=NULL;
	if(head2==NULL){
		head2=n;
		tail2=n;
	}
	else{
		tail2->next=n;
		tail2=n;
	}
}

int main(){
	Node(1);
	Node(2);
	Node(3);
	Node2(4);
	Node2(5);
	Node2(1);
	Node2(2);
	Node2(3);
	node *p1=head1,*p2=head2;
	while(p2!=NULL){
		node *temp=p2;
		node *curr1=p1;
		while(curr1!=NULL){
			if(temp->data!=curr1->data)
				break;
			temp=temp->next;
			curr1=curr1->next;
		}
		if(curr1 ==NULL){
			cout<<"FOUND";
			break;
		}
		p2=p2->next;
	}
	return 0;
}

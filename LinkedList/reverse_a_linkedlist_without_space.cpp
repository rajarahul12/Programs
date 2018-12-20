#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node *head=NULL;
Node *last= NULL;

void node(int val){
	Node *n = new Node;
	n->data = val;
	n->next = NULL;
	if(head == NULL){
		head = last = n;
	}
	else{
		last->next = n;
		last =n;
	}
}

void reverseLinkedlist(){
	Node *prev=head;
	Node *curr=head->next;
	Node *temp;
	while(true){
		if(prev==head){
			prev->next=NULL;
			last=prev;	
		}
		temp=curr;
		curr=curr->next;
		temp->next = prev;
		prev=temp;
		if(curr==NULL){
			head=prev;
			break;
		}
	}
}

int main(){
	node(2);
	node(3);
	node(4);
	reverseLinkedlist();
	cout<<head->data<<"\n"<<last->data;
	return 0;
}

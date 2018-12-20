#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

node * Node(int val){
	node *n=new node;
	n->data=val;
	n->next=NULL;
	return n;
}

bool findSublist(node *head1,node *head2){
	if(head1==NULL && head2==NULL)
		return true;
	if((head1==NULL && head2->next!=NULL) || (head2==NULL && head1->next!=NULL))
		return false;
	node *p1=head1,*p2=head2;
	while(p2!=NULL){
		node *c2=p2,*c1=p1;
		while(c1!=NULL){
			if(c1->data != c2->data)
				break;
			c1=c1->next;
			c2=c2->next;
		}
		if(c1==NULL)
			return true;
		p2=p2->next;
	}
	return false;
}

int main(){
	node *head2=Node(4);
	head2->next=Node(5);
	head2->next->next=Node(1);
	head2->next->next->next=Node(2);
//	head2->next->next->next->next=Node(3);
	node *head1=Node(1);
	head1->next=Node(2);
	head1->next->next=Node(3);
	if(findSublist(head1,head2))
		cout<<"FOUND";
	else
		cout<<"NOT FOUND";
	return 0;
}

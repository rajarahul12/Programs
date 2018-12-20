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

void reverseLinkedlist(int len,int mid){
	Node *prev=head,*curr=head;
	Node *temp;
	int count=1;
	while(true){
		if(count<=mid){
			prev=curr;
			curr=curr->next;
			count++;
		}
		else{
			temp=curr;
			curr=curr->next;
			temp->next=prev;
			prev=temp;
			if(curr==NULL){
				last=prev;
				break;
			}
		}
	}
}

bool checkPalindrome(int n){
	int count=1,mid=ceil(n/2);
	Node *p=head,*q=last;
	while(count<=mid){
		if(p->data==q->data){
//			cout<<p->data<<"\t"<<q->data<<"\n";
			count++;
			p=p->next;
			q=q->next;
		}
		else
			return false;
	}
	return true;
}

int main(){
	node(2);
	node(3);
	node(3);
	node(2);
	int len=0,mid;
	Node *p=head;
	while(p!=NULL){
		p=p->next;
		len++;
	}
	if(len%2 == 0)
		mid=len/2;
	else
		mid=(len/2)+1;
//	cout<<len<<"\t"<<mid<<"\n";
	reverseLinkedlist(len,mid);
//	cout<<head->data<<"\n"<<last->data;
	if(checkPalindrome(len)){
		cout<<"YES\n";
	}
	else
		cout<<"NO\n";
	return 0;
}

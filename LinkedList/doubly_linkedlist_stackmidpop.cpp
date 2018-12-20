#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
	node *next,*prev;
	int data;
}*head=NULL,*mid=NULL,*last=NULL;
int count=0;

void pushElement(int val){
	node *n = new node;
	n->data = val;
	n->prev= NULL;
	n->next=NULL;
	if(head==NULL){
		head=n;
		last=n;
		mid=n;
		count++;
	}
	else{
		last->prev=n;
		n->next=head;
		last=n;
		count++;
		if(count%2 != 0){
			mid=mid->prev;
		}
	}
}


int popMiddle(){
	int val;
	if(count%2 != 0){
		node *temp=mid->prev;
		val=temp->data;
		mid=mid->next;
		temp->next=NULL;
		mid->prev=NULL;
	}
	else{
		node *temp=mid;
		val=temp->data;
		mid=mid->prev;
		mid->next=temp->next;
		temp->next=NULL;
		temp->prev=NULL;
	}
	count--;
	return val;
}

void midPush(int val){
//	cout<<-1<<"\n";
	node *n = new node;
	n->data = val;
	n->next = NULL ;
	if(mid == NULL){
		mid=n;
		mid->prev=NULL;
		head = last = mid ;
		return;
	}
	n->prev=mid;
	n->next = mid->next;
	mid->next=n;
	mid=n;
}

int main(){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int element;
			cin>>element;
			pushElement(element);
		}
		int query;
		cin>>query;
//		cout<<"1. Push the element on the Stack.\n";
//		cout<<"2. Insert an element in the middle in such a way so that the element moves away from top.\n";
//		cout<<"3. Return the element at the top of stack.\n";
//		cout<<"4. Return and remove the element from the middle.\n";
//		cout<<"5. Print the middle element of stack.\n";
	while(query--){
		int choice;
		cin>>choice;
		switch(choice){
			case 1:
				int val;
				cin>>val;
				pushElement(val);
				break;
			case 2:
				int midval;
				cin>>midval;
				midPush(midval);
				break;
			case 3:
				if(head == NULL){
					cout<<"-1\n";
				}
				else{
					cout<<last->data<<"\n";
				}
				break;
		
			case 4:
				cout<<popMiddle()<<"\n";
				break;
			case 5:
				if(head == NULL)
					cout<<"-1\n";
				else
					cout<<mid->data<<"\n";
				break;
	}}
	return 0;
}

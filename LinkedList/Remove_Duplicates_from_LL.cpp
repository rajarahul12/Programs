#include <bits/stdc++.h>
using namespace std;
struct Node
{
int data;
Node* next;
};
Node *newNode(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
 
void print(Node *root)
{
//	cout<<"Hello";
	Node *temp = root;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=newNode(data);
			else
			{
				temp->next = newNode(data);
				temp=temp->next;
			}
		}
		
	
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of linked list is the following
struct Node
{
int data;
Node* next;
};
*/
Node *removeDuplicates(Node *root)
{
    Node *p,*temp,*prev,*del;
    p =root; temp =root; prev =root; del = root;
    int count=0;
    while(p!=NULL){
        if(p==root){
            prev=p;
            p=p->next;
        }
        else{
            temp=root;
            count=0;
            while(temp!=p){
                if(temp->data == p->data){
                    del = p;
                    p=p->next;
                    prev->next = del->next;
                    delete del;
                    count=1;
                    break;
                }
                temp=temp->next;
            }
            if(count == 0){
                prev=p;
                p=p->next;
            }
        }
    }
    return root;
}

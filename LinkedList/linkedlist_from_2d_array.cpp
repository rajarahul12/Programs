#include<iostream>
using namespace std;

struct node{
	int data;
	node *right,*down;
};

node *head=NULL;

node* constructLinkedListMatrix(int array,int n,int i,int j){
	if(i>n-1 || j>n-1)
		return NULL;
	
	node *temp= new node;
	temp->data = array[i][j];
	temp->right = constructLinkedListMatrix(array,n,i,j+1);
	temp->down = constructLinkedListMatrix(array,n,i+1,j);
	return temp;
}

int main(){
	int n;
	cout<<"Enter n : "; 
	cin>>n;
	int array[n][n];
	cout<<"\n Enter the elements : ";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>array[i][j];
		}
	}
	cout<<"\n";
	node *head = constructLinkedListMatrix(array,n,0,0);
	cout<<head->data;
	return 0;
}

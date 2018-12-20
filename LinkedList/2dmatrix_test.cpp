#include <bits/stdc++.h>
#define MAX 20
using namespace std;
struct Node
{
	int data;
	Node* right, *down;
};
void display(Node* head)
{
    Node* Rp;
	Node* Dp = head;
	while (Dp) {
		Rp = Dp;
		while (Rp) {
			cout << Rp->data << " ";
			Rp = Rp->right;
		}
		cout << "\n";
		Dp = Dp->down;
	}
}
Node* constructLinkedMatrix(int mat[MAX][MAX], int n,int i=0,int j=0);
// driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mat[MAX][MAX];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>mat[i][j];
        Node* head = constructLinkedMatrix(mat, n);
        if(!head)cout<<"-1";
	    else display(head);
	    cout<<"";
    }
	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*structure of the node of the linked list is as
struct Node
{
	int data;
	Node* right, *down;
};*/
// n is the size of the matrix
// function must return the pointer to the first element 
// of the in linked list i.e. that should be the element at arr[0][0]
Node* constructLinkedMatrix(int mat[MAX][MAX], int n,int i,int j)
{
    // code here
    if(i>n-1 || j>n-1)
        return NULL;
    Node* temp = new Node;
    temp->data = mat[i][j];
    temp->right = constructLinkedMatrix(mat,n,i,j+1);
    temp->down = constructLinkedMatrix(mat,n,i+1,j);
    return temp;
}

// CPP program to construct a linked list 
// from given 2D matrix 
#include <bits/stdc++.h> 
using namespace std; 
  
// struct node of linked list 
struct Node { 
    int data; 
    Node* right, *down; 
}; 
  
// returns head pointer of linked list 
// constructed from 2D matrix 
Node* construct(int arr[][3], int i, int j,  
                              int m, int n) 
{ 
    // return if i or j is out of bounds 
    if (i > n - 1 || j > m - 1) 
        return NULL; 
  
    // create a new node for current i and j 
    // and recursively allocate its down and 
    // right pointers 
    Node* temp = new Node(); 
    temp->data = arr[i][j]; 
    temp->right = construct(arr, i, j + 1, m, n); 
    temp->down  = construct(arr, i + 1, j, m, n); 
    return temp; 
} 
  
// utility function for displaying 
// linked list data 
void display(Node* head) 
{ 
    // pointer to move right 
    Node* Rp; 
  
    // pointer to move down 
    Node* Dp = head; 
  
    // loop till node->down is not NULL 
    while (Dp) { 
        Rp = Dp; 
  
        // loop till node->right is not NULL 
        while (Rp) { 
            cout << Rp->data << " "; 
            Rp = Rp->right; 
        } 
        cout << "\n"; 
        Dp = Dp->down; 
    } 
} 
  
// driver program 
int main() 
{ 
    // 2D matrix 
    int arr[][3] = { 
        { 1, 2, 3 }, 
        { 4, 5, 6 }, 
        { 7, 8, 9 } 
    }; 
  
    int m = 3, n = 3; 
    Node* head = construct(arr, 0, 0, m, n); 
    display(head); 
//    cout<<"\n"<<head->down->data<<"\n";
    return 0; 
} 

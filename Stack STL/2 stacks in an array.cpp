#include<iostream>
using namespace std;

int a[5],tos1=0,tos2=4,count=0;

int main(){
	
	int ch;
	cout<<"Enter choice\n";
	while(1){
	cout<<"1.PUSH STACK1\n";
	cout<<"2.POP STACK1\n";
	cout<<"3.PUSH STACK2\n";
	cout<<"4.POP STACK2\n";
	cout<<"5.EXIT\n";
	cin>>ch;
	switch(ch){
		case 1:
			if(count!=5){
				cout<<"\nEnter the value : ";
				cin>>a[tos1];
				tos1++;
				count++;
			}
			else{
				cout<<"\nOverflow\n";
			}
			break;
		case 2:
			if(count == 0){
				cout<<"\nUnderflow\n";
			}
			else{
				tos1=tos1-1;
				count--;
			}
			break;
		case 3:
			if(count != 5){
				cout<<"\nEnter the value : ";
				cin>>a[tos2];
				tos2--;
				count++;
			}
			else{
				cout<<"\nOverflow\n";
			}
			break;
		case 4:
			if(count == 0){
				cout<<"\nUnderflow\n";
			}
			else{
				tos2=tos2+1;
				count--;
			}
			break;	
		
	}
	}
	return 0;
}

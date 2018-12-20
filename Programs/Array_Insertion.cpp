#include<iostream>
using namespace std;
void insertion(int a[],int pos,int val){
	for(int i=3;i>=pos;i--){
		a[i+1]=a[i];
	}
	a[pos]=val;	
}

void deletion(int a[],int pos){
	for(int i=pos;i<5;i++){
		a[i]=a[i+1];
	}
}

bool sequentialsearch(int a[],int val){
	int flag=0;
	for(int i=0;i<5;i++){
		if(a[i] == val){
			flag = 1;
			break;
		}
	}
	if(flag==1){
		return true;
	}	
	else{
		return false;
	}
}

void decToBin(){
	int n1,n2;
	cin>>n1>>n2;
	int diff=n1-n2;
	cout<<diff<<"\n";
	int binary[4]={0},i=0;
	while(diff > 0){
		binary[i]=diff%2;
		diff=diff/2;
		i++;
	}
	int count=0;
	for(i=3;i>=0;i--){
		if(binary[i] == 1){
			count++;
		}
	}
	cout<<"The no.of 1 bits required are : "<<count;
}

int main(){
	int a[5],i;
	for(i=0;i<4;i++){
		cin>>a[i];
	}
	int loc,num,delpos;
	cout<<"Enter the loc";
	cin>>loc;
	cout<<"Enter num";
	cin>>num;
	insertion(a,loc,num);
	//This is call by reference because the base address is being passed to the function.
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\nEnter the position from which position you want to delete";
	cin>>delpos;
	deletion(a,delpos);
	for(int i=0;i<4;i++){
		cout<<a[i]<<" ";
	}
	int val;
	cout<<"\nEnter the value : ";
	cin>>val;
	bool b=sequentialsearch(a,val);
	if(b == true){
		cout<<"\nElement found";
	}
	else{
		cout<<"\nElement not found";
	}
//	decToBin();
	return 0;
}

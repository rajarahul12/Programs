//FRUGAL NUMBER -- If no.of digits in the prime factorization are more than in the given number
//codechef.com/problems/DXVIO4 or 04
#include<iostream>
#include<math.h>
using namespace std;

bool findFrugal(int n){
	int i,num=0,temp=n;
	if(n==1 || n==2 || n==3)
		return false;
	for(i=2;i<=temp;i+=1){
		int j=0;
		while(n%i == 0){
			n=n/i;
			if(j==0 || j==1)
				num++;
			j++;
		}
//		if(i>3)
//			i++;
	}
	
	int ndigits = 0;
	while(temp>0){
		temp=temp/10;
		ndigits++;
	}
	if(ndigits < num)
		return true;
	else
		return false;
}

int main(){
//	cin.tie(0);
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	if(findFrugal(n)){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	int a[5]={1,5,-3,4,5};
//	int Max=a[0],tnow=a[0];
//	for(int i=1;i<5;i++){
//		
//		tnow=max(a[i],tnow+a[i]);
//		Max =max(Max,tnow);
//	}
	int start=0,stop=0,s=0,tillnow=0,Max=0;
	for(int i=0;i<5;i++){
		tillnow+=a[i];
		if(tillnow<0){
			s=i+1;
			tillnow=0;
		}
		else if(Max<tillnow){
			Max=tillnow;
			start=s;
			stop=i;
		}
	}
	cout<<"START "<<start<<" STOP "<<stop;
	cout<<"\n"<<Max;
	return 0;
}

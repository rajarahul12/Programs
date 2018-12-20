#include<iostream>
using namespace std;

int main(){
	int a[3][3]={{1,2,3}
				,{4,5,6}
				,{7,8,9}};
	int beg=0,row,end=2,mid=(beg+end)/2,val;
	cin>>val;
	while(beg<=end){
//		cout<<beg<<"\t"<<end<<"\t"<<mid<<"\n";
		if(a[mid][2] >= val && a[mid][0]<=val)
		{
			row=mid;
			break;
		}
		else if(a[mid][2]>val )
			end=mid-1;
		else
			beg=mid+1;
		mid=(beg+end)/2;
	}
	beg=0;
	end=2;
	mid=(beg+end)/2;
	while(beg<=end){
		if(a[row][mid]==val){
			cout<<row<<mid<<"\n";
			break;
		}
		else if(a[row][mid]>val){
			end=mid-1;
		}
		else
			beg=mid+1;
		mid=(beg+end)/2;
	}
	return 0;
}

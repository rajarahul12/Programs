#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n;
	int *p[n],i,j,prev=0,index[n],val;
	for(i=0;i<n;i++){
		cin>>m;
		index[i]=m;
		p[i]=new int[m];
		for(j=0;j<m;j++){
			*(*(p+i)+j)=++prev;
//			cout<<*(*(p+i)+j)<<"\t";
		}
	}
	cin>>val;
	int beg=0,end=n-1,mid,row,col;
	while(beg<=end){
		mid=(beg+end)/2;
		j=index[mid]-1;
		if(*(*(p+mid)+j) >= val && *(*(p+mid)+j) <= val){
			row=mid;
			break;
		}
		else if(*(*(p+mid)+j) > val){
			row=mid;
			end=mid-1;
		}
		else{
			row=mid;
			beg=mid+1;
		}
	}
	cout<<row<<"\n";
	return 0;
}

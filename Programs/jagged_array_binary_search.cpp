#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
	int n,m;
	cin>>n;
	int *p[n],i,j,prev=0,index[n],val;
	for(i=0;i<n;i++){
		cin>>m;
		index[i]=m;
		p[i]=new int[m];
		for(j=0;j<m;j++){
			*(*(p+i)+j)=++prev;
		}
		for(j=0;j<m;j++){
			cout<<*(*(p+i)+j)<<"\t";
		}
		cout<<"\n";
	}
	int beg,end,mid,row,col,t;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>val;
		beg=0;
		end=n-1;
		while(beg<=end){
			mid=(beg+end)/2;
//			cout<<mid<<"\t";
			j=index[mid]-1;
			if(*(*(p+mid)+j) >= val && *(*(p+mid)+0) <= val){
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
		cout<<"\n"<<row+1<<"\n";
	}
	return 0;
}

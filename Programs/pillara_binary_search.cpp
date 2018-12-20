#include<iostream>
using namespace std;
typedef long long int ll;

int bs(ll a[], ll k, int n){
    int beg=0, end=n-1, mid;
	while(beg<=end){
		mid = (beg+end)/2;
		if(a[mid] < k)
			beg = mid + 1;
		else if(a[mid] > k)
			end = mid - 1;
		else
		    return mid-1; 
	}
	return beg-1;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m=0,t,x;
    cin>>n>>t;
    ll i,j,a,b,index[2*n],cur[2*n],prev,count=0;
    for(i=0;i<2*n;i+=2){
        cin>>a>>b;
        index[i]=a;
        index[i+1]=b;
        cur[i] =count;
        prev=b-a;
		cur[i+1]=prev+count;
		count+=prev+1;
    }
//    for(i=0;i<2*n;i++)
//    	cout<<cur[i];
	while(t--){
		cin>>x;
		int pos = bs(cur,x,2*n);
		cout<<x-cur[pos]+index[pos]-1<<"\n";
	}
    return 0;
}

#include<iostream>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m=0,t,x;
    cin>>n>>t;
    ll i,j,a,b,index[2*n];
    for(i=0;i<2*n;i++){
        cin>>a>>b;
        m+=b-a+1;
        index[i]=a;
        index[++i]=b;
    }
//    for(i=0;i<2*n;i++)
//    	cout<<index[i];
    ll array[m];
    j=0;
    array[0]=index[j];
    for(i=1;i<m;i++){
    	if(array[i-12]+1<=index[j+1])
    		array[i]=array[i-1]+1;
    	else
    	{
    		j+=2;
    		array[i]=index[j];
    	}
    }
//    for(i=0;i<m;i++){
//    	cout<<array[i]<<"\n";
//    }
	while(t--){
		cin>>x;
		cout<<array[x-1]<<"\n";
	}
    return 0;
}

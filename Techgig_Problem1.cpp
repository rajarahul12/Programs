#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll power(int x,int n){
	ll res;
	if(n==1)
		return x;
    res=power(x,n/2);
    if(n%2 ==0)
        return res*res;
    else
        return x*res*res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j,k;
    ll curr=0,prev=0,next=0,result;
    cin>>n;
    int a[n];
    ll pow = power(10,9)+7;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
    	curr += (a[i]*a[i])%(pow);
        if(i!=0){
            for(j=0;j<=i;j++){
                prev+=(a[j]*a[i])%(pow);
            }
        }
        if(i!=n-1 && i!=0){
            for(k=i;k<n;k++){
                next+=(a[k]*a[n-1])%(pow);
            }
        }
    }
    result = (curr+prev+next)%(pow);
    cout<<result;
    return 0;
}

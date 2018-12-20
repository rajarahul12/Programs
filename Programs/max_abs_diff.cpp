#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,max,min,res,temp;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        min=a[0];
        max=a[0];
        res=INT_MIN;
        for(i=1;i<n;i++){
            if(a[i]>max){
                max=a[i];
                temp=max-min;
                if(res<temp)
                	res=temp;
        	}
            else{
            	if(a[i]<min)
            		min=a[i];
                max=a[i];
            }
        }
        if(res==INT_MIN)
        	cout<<0<<"\n"
        else
        	cout<<res<<"\n";
    }
}

#include <iostream>
using namespace std;

void reverse(int a[],int begin,int end){
    for(int i=begin;i<end;i++){
        int temp=a[begin];
        a[begin]=a[end];
        a[end]=temp;
        begin++;
        end--;
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,i,j;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cin>>k;
	    for(i=0;i<n;i++){
			int count=1;
	        if(n-i < k){
	            k=n-i;
	        }
	        while(count<k){
	            if(a[i+count] == a[i]+count){
	                count++;
	            }
	            else{
	                break;
	            }
	        }
	        if(count>1)
	            reverse(a,i,i+count-1);
	        i=i+count-1;
	    }
	    for(i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}

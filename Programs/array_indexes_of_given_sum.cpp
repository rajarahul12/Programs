#include<algorithm>
#include<iostream>
using namespace std;

void calculateSum(int a[],int n,int sum){
    int i,j,reqsum=0,check=0;
    for(i=0;i<n;i++){
        if(check==1)
        break;
        reqsum=a[i];
        for(j=i+1;j<n;j++){
            if(reqsum<sum){
                reqsum+=a[j];
                if(reqsum==sum){
                    cout<<i+1<<" "<<j+1<<"\n";
                    check=1;
                    break;
                }
            }
            if(reqsum>sum){
                break;
            }
        }
    }
    if(check==0)
    cout<<-1<<"\n";
}

int main() {
	int t,n,sum,i;
	cin>>t;
	while(t--){
	    cin>>n>>sum;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    calculateSum(a,n,sum);
	}
	return 0;
}

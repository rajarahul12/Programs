#include<iostream>
#include<algorithm>
using namespace std;

bool find_Pythagorean_Triplet(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        a[i]=a[i]*a[i];
    }
    sort(a,a+n);
    int l,r;
    for(i=n-1;i>=2;i--){
        l=0;
        r=n-1;
        while(l<r){
            if(a[l]+a[r]==a[i])
                return true;
            (a[l]+a[r]<a[i]) ? l++ : r--;
        }
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        if(find_Pythagorean_Triplet(a,n)){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
    return 0;
}

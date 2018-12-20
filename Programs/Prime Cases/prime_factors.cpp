#include <iostream>
#include<set>
#include<math.h>
#include<iterator>
using namespace std;

void primeFactors(int n){
    set <int> s;
    int temp = n;
    if(n%2 == 0){
        s.insert(2);
        n=n/2;
    }
    for(int i=3;i<=sqrt(n);i=i+2){
        if(n%i == 0){
            s.insert(i);
            n=n/i;
        }
    }
    if(n>2)
        s.insert(n);
        
    for(auto it=s.begin(); it!=s.end();it++)
        cout<<*it<<" ";
    cout<<"\n";
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        primeFactors(n);
    }
}

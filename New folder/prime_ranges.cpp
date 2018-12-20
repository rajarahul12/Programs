#include<bits/stdc++.h>
using namespace std;
int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    bool seive[100001];
    memset(seive,true,sizeof(seive));
    seive[0]=false;
    seive[1]=false;
    int i,j;
    for(i=2;i*i<=sizeof(seive);i++){
        if(seive[i]){
            for(j=2*i;j<=sizeof(seive);j+=i){
                seive[j]=false;
            }   
        }
    }
    int n,a,b,count=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        for(i=a;i<=b;i++)
        {
            if(seive[i])
                count++;
        }
        cout<<count<<"\n";
        count=0;
    }
    return 0;
}


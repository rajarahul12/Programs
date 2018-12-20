#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector<int>A(N);
        for(int i=0;i<N;i++){
           cin>>A[i];
        }
        vector<int>l(N);
        vector<int>r(N);
        l[0]=A[0];
        for(int i=1;i<N;i++){
            l[i]=min(A[i],l[i-1]);
        }
        r[N-1]=A[N-1];
        for(int i=N-2;i>=0;i--){
            r[i]=max(A[i],r[i+1]);
        }
        int i=0,j=0,ans=-1;
        while(i<N&&j<N){
            if(l[i]<=r[j]){
                ans=max(ans,j-i);
                j++;
            }
            else i++;
        }
        cout<<ans;
        cout<<endl;
    }
	return 0;
}

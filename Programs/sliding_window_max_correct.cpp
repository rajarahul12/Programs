#include<bits/stdc++.h>
using namespace std;

void slidingMax(int a[],int n,int w){
	deque <int> q;
	for(int i=0;i<n;i++){
		if(!q.empty() && q.front()==i-w)
			q.pop_front();
		while(!q.empty() && a[i] >= a[q.back()])
            q.pop_back();
        
		q.push_back(i);
		if(i>=w-1)
			cout<<a[q.front()]<<"\n";
	}
}

int main(){
	int n,k;
	cin>>n>>k;
	int a[n],i;
	for(i=0;i<n;i++)
		cin>>a[i];
	
	slidingMax(a,n,k);
	
	return 0;
}

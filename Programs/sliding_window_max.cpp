#include<bits/stdc++.h>
using namespace std;
//Not correct checkout interview bit
void slidingMax(int a[],int n,int k){
	if(n<k){
		int i,max=a[0];
		for(i=1;i<n;i++){
			if(max<a[i])
				max=a[i];
		}
		cout<<max<<"\n";
		return;
	}
	deque <int> q;
	q.push_back(a[0]);
	int i,max_count=1,c=1,max=q.front();
	for(i=1;i<n;i++){
		c++;
		if(max_count==k){
			q.pop_front();
			max=q.front();
			max_count=1;
		}
		if(a[i]<q.back()){
			if(q.size()==k)
				q.pop_front();
			q.push_back(a[i]);
			max_count++;
		}
		else{
			while(!q.empty() && q.back()<=a[i])
				q.pop_back();
			q.push_back(a[i]);
			if(q.front() == max)
				max_count++;
			else{
				max_count=1;
				max=q.front();				
			}
		}
		if(c==k){
			cout<<q.front()<<"\n";
			c--;
		}
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

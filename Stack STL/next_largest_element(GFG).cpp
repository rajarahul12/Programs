#include <iostream>
#include <stack>
using namespace std;
int main() {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    stack <int> s;
		s.push(a[0]);
		for(int i=1;i<n;i++){
			while(!s.empty() && s.top()<a[i]){
				cout<<a[i]<<" ";
				s.pop();
			}
			s.push(a[i]);
		}
		while(!s.empty()){
			cout<<-1<<" ";
			s.pop();
		}
	}
	return 0;
}

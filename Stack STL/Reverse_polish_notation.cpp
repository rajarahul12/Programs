#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,res,p,q;
	cin>>n;
	stack <int> s;
	string a[n],s1;
	for(i=0;i<n;i++){
			cin>>a[i];
			s1=a[i];
			switch(s1){
				case '+':
					p=s.top();
					s.pop();
					q=s.top();
					s.pop();
					s.push(p+q);
					break;
				case '-':
					p=s.top();
					s.pop();
					q=s.top();
					s.pop();
					s.push(q-p);
					break;
				case '*':
					p=s.top();
					s.pop();
					q=s.top();
					s.pop();
					s.push(q*p);
					break;
				case '/':
					p=s.top();
					s.pop();
					q=s.top();
					s.pop();
					res=q/p;
					s.push(res);
					break;
				case '%':
					p=s.top();
					s.pop();
					q=s.top();
					s.pop();
					res=q%p;
					s.push(res);
					break;
				default:
					s.push(stoi(a[i]));
					break;
			}
		}
	}
	cout<<s.top()<<"\n";
	return 0;
}

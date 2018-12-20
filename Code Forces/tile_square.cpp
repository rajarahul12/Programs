#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double m,n,a;
	cin>>n>>m>>a;
//	int x=0;
	double count=0;
	count=(ceil(n/a))*(ceil(m/a));
	cout<<(long long int)count;
}

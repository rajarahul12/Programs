//Lemoine's Conjectures: Any odd>5 can be represented as odd prime + even semiprime
//Even semiprime - obtained by multiplication of two primes
// 9 = 3 + (2*3)
#include<bits/stdc++.h>
using namespace std;

void initialise(bool seive[],int n){
	int i,j;
	seive[0]=seive[1]=false;
	for(i=2;i*i<=n;i++){
		if(seive[i]){
			for(j=2*i;j<=n;j+=i)
				seive[j]=false;
		}
	}
}

int main(){
	int n;
	cin>>n;
	bool seive[n+1];
	memset(seive,true,sizeof(seive));
	initialise(seive,n+1);
//	for(int i=0;i<=n;i++){
//		cout<<seive[i]<<"\n";
//	}
	int odd,semi;
	for(int i=2;i<n;i++){
		if(seive[i])
		{
			semi=2*i;
			odd=n-semi;
			if(odd>0 && seive[odd] && (odd&1)){
				cout<<n<<" = "<<odd<<" + (2*"<<i<<")\n";
			}
		}	
	}
	return 0;
}

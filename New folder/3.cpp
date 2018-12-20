#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int count=0,count1=arr[0],sum=arr[0];
		for(int i=1;i<n;i++)
		{
			if(count1!=0)
			{
				count1--;
				sum=sum+arr[i];
			}
			if(count1==0)
			{	
				count++;
				count1=sum;	
			}
			else if(i==n-1 && count1!=0)
			{
				count++;
			}
		}
		cout<<count<<"\n";
	}
}

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int t,k,n,q,cnt;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];	
		}	
		cin>>q;
		for(int i=0;i<q;i++)
		{
			cnt=0;
			cin>>k;
			for(int j=0;j<n;j++)
			{
				if(a[j]==k)
				{
					cnt=1;
					break;
				}	
			}
			if(cnt==1)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		}		
	}	
	return 0;
}

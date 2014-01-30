#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
void reverse(long lomg int a[], int s, int e) {
	int i = s, j = e;
	long long int temp;
 
	while(i<j) {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
int main()
{
	int T, N;
	long long int A,B,C;
	scanf("%d",&T);
	while(T--)
	{
		int temp;
		scanf("%d",&N);
		long long int L[N];
		for(int i=0;i<N;i++)
		{
			scanf("%lld",L[i]);	
		}	
		scanf("%lld%lld%lld",&A,&B,&C);
		char S[N];
		scanf("%s",&S);
		while(int i=0;i<N;i++)
		{
			if(S[i]=='R')
			{
				reverse(L,i-1,N)		
			}
			if(S[i]=='A')
			{
					
			}
		}	
		
		
	}
	
}

#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	int N[t];
	for(int i=0;i<t;i++)
	{
		scanf("%d",&N[i]);	
	}
	sort(N,N+t);					
	for(int i=0;i<t;i++)
	{
		printf("%d\n",N[i]);	
	}	
	return 0;
}

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s1[10000];
		cin>>s1;
		int l = strlen(s1);
		if(l>10)
		printf("%c%d%c\n",s1[0],l-2,s1[l-1]);
		else
		cout<<s1<<endl;
	}
	return 0;
}

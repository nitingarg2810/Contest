#include<iostream>
#include<cstring>
using namespace std;
#define max 10 
int main()
{
	int t,l;
	char s[max];
	cin>>t;
	while(t--)
	{
		cin>>s;
		l=strlen(s)-1;
		if(s[l]%2!=0)
		{	
			s[l]--;	
		}
		cout<<s<<endl;
	}
	return 0;
}

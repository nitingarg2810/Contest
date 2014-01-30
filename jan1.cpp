#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
	char str[100000];
	char str1[3]={'1','0','1'};
	string k = str1[0]+str1[1];
	cout << k;
	char str2[3]={'0','1','0'};
	int t, count=0;
	cin>>t;
	while(t--)
	{
		cin>>str;
		for(int i=0;str[i]!='\0';i++)
		{
		//	string a='str[i]'+'str[i+1]'+'str[i+2]';
			cout<< a<<endl;
			bool NoMatch=false;
		
		}	
		if(count!=0)
		cout<<"Good"<<endl;
		else
		cout<<"Bad"<<endl;	
	}
	return 0;
}

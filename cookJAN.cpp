#include <iostream>
#include<math.h>
using namespace std;
 
int main() {
	int t;
	int a11,a12,b11,b12,a21,a22,b21,b22,ia1,ia2,ib1,ib2;
	int a,a1,a2,ia;
	cin>>t;
	while(t--)
	{ 
		cin>>a11>>b11>>a12>>b12>>a21>>b21>>a22>>b22;
		ia=a=a1=a2=0;
		a1= (a12-a11)*(b12-b11);
		a2= (a22-a21)*(b22-b21);
		ia1=max(a11,a21);
		ib1=max(b11,b21);
		ia2=min(a12,a22);
		ib2=min(b12,b22);
		ia =(ia2-ia1)*(ib2-ib1);
		if(ia1<ia2 && ib1<ib2)
		{
			a= a1+a2-ia;
		}
		else
		{
		 a=a1 + a2;
		}
		
		cout<<a<<endl;
	}
	return 0;
} 

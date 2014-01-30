#include<iostream>
using namespace std;
int main()
{
    int n,i,t;
    cin >> t;
    while(t!=0)
    {
		cin >> n;
    	if(n==1)
    	cout << "-1" << endl;
    	else if(n==2)
    	cout << "14" << endl;
		else if(n==3)
    	cout << "105" << endl;
    	else if(n>=4)
    	{
         cout << "1050" << endl;
         for(i=1;i<=n-3;i++)
         {
                            cout << "0" <<endl;
         }
    	}
    	t--;
	}
    return 0;
}

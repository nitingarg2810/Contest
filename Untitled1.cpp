#include<iostream>

using namespace std;
int count=0;
void permute(char a[], int i, int n)
{
   int j;
   if (i == n)
    {
     	cout << a << endl;
     	count++;
	} 
   else
   {
       for (j = i; j <= n; j++)
       {
          swap(a[i], a[j]);          
          permute(a,i+1,n);
          swap(a[i], a[j]);
       }
   }
} 

int main()
{
   char a[] = "ABC";
   permute(a, 0, 2);
   cout << count << endl;
	return 0;
}

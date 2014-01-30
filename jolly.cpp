#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
int n,t,c,b[3000],a[3000],i;
scanf("%d",&t);
while(t--)
{
c=1;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
b[i]=abs(a[i+1]-a[i]);
}
sort(b,b+i);
for(i=1;i<n;i++)
{
if(b[i]==b[i-1])
{
c=0;
break;
}
}
if(c==0)
printf("Not jolly\n");
else
printf("Jolly\n");
}
return 0;
}

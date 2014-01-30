#include<stdio.h>
int main()
{int a,b,n;int cnt1=0,cnt = 0, ans=0;
scanf("%d",&n);
if(n==2)
{
	ans=2;
}
else{

if(n%2==0 ){
	for(a=2;a<n;a=a+2){
	
		cnt = cnt + 2*a;
	
	}
	ans = cnt + n;
}
else{
	for(a=1;a<n;a=a+2){
		cnt1 = cnt1 + 2*a;
		
	}
	ans = cnt1 +n;
	
	}
}
	printf("%d\n",ans);
	
	for(a=0;a<n;a++){
		for(b=0;b<n;b++)
		{
			if(n%2==0 && a+b!=0 && ((a+b)%2!=0 || a+b==1))
			{
				printf("C");	
			}
			else if( n==1 && (a+b)%2==0)
			{
				printf("C");
			}	
			else
			{
				printf(".");
			}
		}
		
	printf("\n");
}
return 0;
}

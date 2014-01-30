#include<stdio.h>

int main()
{
	int t,rows,arr[98][98],i,j,count=0;
	scanf("%d",&t);
	while(t--)
	{
		arr[98][98]=0;
		scanf("%d",&rows);	
		for(i=0;i<rows;i++)
		{
			for(j=0;j<=i;j++)
			{
				scanf("%d",&arr[i][j]);				
			}		
		}
	}
	return 0;
}
int rec(int i, int j)
{
	arr[]
	if(i>=rows)
	return 0;
	
	else
	{
		x1=rec(i+1,j);
		x2=rec(i+1,j+1);	
		x=a[i][j]+max(x1,x2);	
	}
	
}

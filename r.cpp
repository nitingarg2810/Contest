#include<stdio.h>
 
int main()
{
   int t, n, m;
   int i, j, k;
   int fieldno=1;
   char f[127][127];
   int ff[127][127];
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d%d", &n, &m);
      if(n==0 && m==0)
	 break;
      for(i=0; i<n; i++)
      {
	 scanf("%s",f[i]);
      }
      for(i=0; i<n; i++)
      {
	 for(j=0; j<m; j++)
	 {
	    if(f[i][j]=='\0')
	    {
	       for(k=j; k<m; k++)
		  ff[i][k]=0;
	       break;
	    }
	    if(f[i][j]=='*')
	       ff[i][j]=-1;
	    else
               ff[i][j]=0;
         }
      }
      printf("Case %d:\n", fieldno);
      for(i=0; i<n; i++)
      {
         for(j=0; j<m; j++)
         {
            if(ff[i][j]==-1)
            {
               printf("*");
               continue;
            }
            if(i>0 && j>0 && ff[i-1][j-1]==-1)
               ff[i][j]+=1;
            if(i>0 && ff[i-1][j]==-1)
               ff[i][j]+=1;
	    if(i>0 && j<=m-2 && ff[i-1][j+1]==-1)
               ff[i][j]+=1;               
	    if(j<=m-2 && ff[i][j+1]==-1)
               ff[i][j]+=1;
	    if(i<=n-2 && j<=m-2 && ff[i+1][j+1]==-1)
               ff[i][j]+=1;               
	    if(i<=n-2 && ff[i+1][j]==-1)
               ff[i][j]+=1;               
	    if(i<=n-2 && j>0 && ff[i+1][j-1]==-1)
               ff[i][j]+=1;               
            if(j>0 && ff[i][j-1]==-1)
               ff[i][j]+=1;
            printf("%d",ff[i][j]);
         }
         printf("\n");
      }
      ++fieldno;
      printf("\n");
   }
   return 0;
} 

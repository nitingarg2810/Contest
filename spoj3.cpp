#include <cstdio>
 
int main()
{
	int t,m,n,k=1;
	scanf("%d",&t);
	char mat[101][101];
	while (t--)
	{
		scanf("%d %d",&n,&m)&&(m||n);
		for (int i=0;i<n;i++)
			scanf("%s",mat[i]);
			
		for (int i=0;i<n;i++)
			for (int j=0;j<m;j++)
				if (mat[i][j]!='*')
					mat[i][j]='0';
				
		for (int i=0;i<n;i++)
			for (int j=0;j<m;j++)
				if (mat[i][j]=='*')
					{
						mat[i][j-1]++;
						mat[i][j+1]++;
						mat[i-1][j]++;
						mat[i+1][j]++;
						mat[i-1][j+1]++;
						mat[i-1][j-1]++;
						mat[i+1][j+1]++;
						mat[i+1][j-1]++;
					}
		printf("Case %d:\n\n",k);			
					
		for (int i=0;i<n;i++)
			printf("%s\n\n",mat[i]);
		k++;
	}
	return 0;
}

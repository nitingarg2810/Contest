#include<stdio.h>
int main(){
	int i,t,n,x;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int np = 0,gp=0;
		for(i=0;i<n;i++){
			scanf("%d",&x);
			np = np + x;
			if(x%5>=2.5){
				gp = gp + (5*(x/5) + 5);
			}
			else{
				gp = gp + (5*(x/5));
			}
			
			}
		if(gp>=np)
		{
			printf("PROFIT \n");
			}
	else{
		printf("BAD SYSTEM \n");
	}
	
	
	}
return 0;

}


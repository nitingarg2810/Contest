#include <cstdio>
 
int gcd(int a, int b){
	if (b<a){
		int t=b;
		b=a;
		a=t;
	}
	if (a==-1) return b;
	if (a==0) return b;
	return gcd(a, b%a);
}
 
long long int dp[61][100001];
 
int n;
int a[61];
 
long long int seq(int pos, int cgcd){
	if (pos==0){
		if (cgcd==1){
			return 2;
		} else if (gcd(cgcd, a[0])==1){
			return 1;
		} else {
			return 0;
		}
	}
	if (dp[pos][cgcd] != -1){
		return dp[pos][cgcd];
	}
	return dp[pos][cgcd] = seq(pos-1, cgcd) + seq(pos-1, gcd(cgcd, a[pos]));
}
 
int main(){
 
	int tc;
	scanf("%d", &tc);
	while(tc--){
		for (int i=0; i<61; i++){
			for (int j=0; j<100001; j++){
				dp[i][j] = -1;
			}
		}
		scanf("%d", &n);
		for (int i=0; i<n; i++){
			scanf("%d", a+i);
		}
 
		printf("%lld\n", seq(n-1, -1));
 
	}
	return 0;
} 

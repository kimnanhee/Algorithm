#include <stdio.h>
int main() 
{
	int dp[15]={0};
	dp[0]=0, dp[1]=1, dp[2]=2, dp[3]=4, dp[4]=7;
	
	int num, N, i;
	scanf("%d", &num);
	
	while(num--) 
	{
		scanf("%d", &N);
		for(i=5; i<=N; i++)
		    dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
		printf("%d\n", dp[N]);
	}
	return 0;
}

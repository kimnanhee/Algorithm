#include <stdio.h>
int main()
{
	int n, score1=100, score2=100;
	scanf("%d", &n);
	while(n--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if(a > b) score2 -= a;
		else if(a < b) score1 -= b;
	}
	printf("%d\n%d", score1, score2);
	return 0;
}

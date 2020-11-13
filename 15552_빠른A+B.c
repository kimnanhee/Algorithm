#include <stdio.h>
int main()
{
	int T;
	int a, b;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a+b);
	}
	return 0;
}

#include <stdio.h>
int gcb(int A, int B)
{
	int i;
	for(i=(A>B ? B:A); i>=1; i--)
		if(A%i==0 && B%i==0) return i;
}
int main()
{
	int T, A, B;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A*B/gcb(A, B));
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int A, B, C, D;
	scanf("%d %d %d %d", &A, &B, &C, &D);
	C += D%60;
	B += (D/60)%60 + C/60;
	A += (D/60)/60 + B/60;

	C %= 60;
	B %= 60;
	A %= 24;
	printf("%d %d %d", A, B, C); 
	return 0;
}

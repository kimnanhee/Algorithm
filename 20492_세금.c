/*
20492 ¼¼±Ý 
*/
#include <stdio.h>
int main()
{
	float N;
	scanf("%f", &N);
	
	float value_a = N*0.78;
	float value_b = N*0.8 + N*0.2*0.78;
	
	printf("%d %d", (int)value_a, (int)value_b);
	
	return 0;
}

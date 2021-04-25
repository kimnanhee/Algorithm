#include <stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	if(T%10) printf("-1");
	else {
		printf("%d %d %d", T/300, T%300/60, ((T%300)%60)/10);
	}
	return 0;
}

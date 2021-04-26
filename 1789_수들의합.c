#include <stdio.h>
int main()
{
	long long int s, sum=0, i;
	int n=0;
	scanf("%lld", &s);
	
	for(i=1; s>=sum; i++)
	{
		sum += i;
		n++;
	}
	if(s==sum) printf("%d", n);
	else printf("%d", n-1);
	
	return 0;
}

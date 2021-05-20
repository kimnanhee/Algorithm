/*
10 이하의 소수를 모두 더하면 2 + 3 + 5 + 7 = 17 이 됩니다.

이백만(2,000,000) 이하 소수의 합은 얼마입니까?
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *arr = (int *)calloc(2000000, sizeof(int));
	int i, j;
	long long sum = 0;
	
	arr[1] = 1;
	
	for(i=2; i<2000000; i++)
	{
		if(arr[i]) continue;
		
		for(j=i+i; j<2000000; j+=i) arr[j] = 1;
	}
	for(i=1; i<2000000; i++)
	{
		if(!arr[i]) sum += i;
	}
	printf("%lld", sum);
	
	free(arr);
	return 0;
}

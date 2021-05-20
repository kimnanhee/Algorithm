/*
1 ~ 10 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 2520입니다.

그러면 1 ~ 20 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 얼마입니까?
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, value, arr[21][21] = {0}, sum = 1;
	
	for (i=2; i<=20; i++) // 소인수분해 
	{
		value = i;
		
		for(j=2; j<=i; j++)
		{
			if(value%j == 0)
			{
				arr[i][j]++;
				value /= j--;
			}
		}
	}
	for(i=2; i<=20; i++)
	{
		int max = 0;
		for(j=2; j<=20; j++)
		{
			if(arr[j][i] > max) max = arr[j][i];
		}
		if(max) sum *= (int)pow(i, max);
	}
	printf("%d", sum);
	return 0;
}

/*
1 ~ 10 ������ � ���ε� ������ �������� ���� ���� ���� 2520�Դϴ�.

�׷��� 1 ~ 20 ������ � ���ε� ������ �������� ���� ���� ���� ���Դϱ�?
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, value, arr[21][21] = {0}, sum = 1;
	
	for (i=2; i<=20; i++) // ���μ����� 
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

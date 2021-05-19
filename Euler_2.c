/*
�Ǻ���ġ(Fibonacci) ������ �� ���� �ٷ� ���� �� �� ���� ���� ���Դϴ�.
1�� 2�� �����ϴ� ��� �� ������ �Ʒ��� �����ϴ�.

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

4�鸸 ������ ¦�� ���� ���� ��� �Ǻ���ġ ���� ���ϸ� �󸶰� �˴ϱ�?
*/
#include <stdio.h>
int arr[100] = {0, 1, 2, 3};

int fibo(int n)
{
	if (arr[n]) return arr[n];
	arr[n] = fibo(n-1) + fibo(n-2);
	return arr[n];
}

int main()
{
	int i, value, sum = 0;
	
	for(i=2; ; i++)
	{
		value = fibo(i);
		if(value >= 4000000) break;
		
		if(value%2 == 0) sum += value;
	}
	printf("%d", sum);
	return 0;
}

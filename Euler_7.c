/*
�Ҽ��� ũ�� ������ �����ϸ� 2, 3, 5, 7, 11, 13, ... �� ���� �˴ϴ�.

�� �� 10,001��°�� �Ҽ��� ���ϼ���.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000
int main()
{
	int *arr = (int *)calloc(MAX, sizeof(int));
	int i, j, cnt = 0;
	
	arr[1] = 1;
	
	for(i=2; i<MAX; i++)
	{
		if(arr[i]) continue;
		
		for(j=i+i; j<MAX; j+=i) 
		{
			if(j == i+i) cnt++;
			arr[j] = 1;
			
			if(cnt == 10001) 
			{
				printf("%d", i);
				free(arr);
				return 0;
			}
		}
	}
	free(arr);
	return 0;	
}

/*
�� �����ϱ� 3
N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù° �ٿ� ���� ���� N(1 �� N �� 10,000,000)�� �־�����. 
��° �ٺ��� N���� �ٿ��� ���ڰ� �־�����. 
�� ���� 10,000���� �۰ų� ���� �ڿ����̴�.
*/
#include <stdio.h>
int main()
{
	int testcase, i, j, input;
	int *arr;
	
	scanf("%d", &testcase);
	arr = (int *)calloc(10001, sizeof(int));
	
	for(i=0; i<testcase; i++)
	{
		scanf("%d", &input);
		arr[input]++;
	}
	
	for(i=0; i<10001; i++)
	{
		if(arr[i])
		{
			for(j=0; j<arr[i]; j++) printf("%d\n", i);
		}
	}
	free(arr);
	return 0;
}

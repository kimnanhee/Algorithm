/*
�� �����ϱ� 2 
N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù° �ٿ� ���� ���� N(1 �� N �� 1,000,000)�� �־�����. 
��° �ٺ��� N���� �ٿ��� ���ڰ� �־�����. 
�� ���� ������ 1,000,000���� �۰ų� ���� �����̴�.
���� �ߺ����� �ʴ´�.
*/
#include <stdio.h>
int main()
{
	int n, i;
	int *arr;
	int *prr;
	
	scanf("%d", &n);
	arr = (int *)malloc(sizeof(int)*n);
	prr = (int *)calloc(2000001, sizeof(int));
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		prr[arr[i]+1000001] = 1;
	}
		
	for(i=0; i<=2000001; i++)
		if(prr[i]) printf("%d\n", i-1000001);
	
	free(arr);
	free(prr);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}
int main()
{
	int n, i;
	int *arr;
	
	scanf("%d", &n);
	arr = (int *)malloc(n*sizeof(int));
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("before qsort\n");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	
	qsort(arr, n, sizeof(int), compare);
	
	printf("\nafter qsort\n");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	
	return 0;
}

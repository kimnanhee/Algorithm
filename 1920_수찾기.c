#include <stdio.h>
#include <stdlib.h>
int intcmp(const void *pa, const void *pb)
{
    return *(int *)pa > *(int *)pb ? 1 : (*(int *)pa < *(int *)pb ? -1 : 0);
}

int find(int arr[], int size, int num)
{
	int mid, left, right;
	left = 0;
	right = size-1;
	while(1)
	{
		mid = (left + right) / 2;
		if(num == arr[mid] || num == arr[left] || num == arr[right])
		{
			return 1;
		}
		else if(num > arr[mid]) left = mid + 1;	
		else right = mid - 1;
		
		if(right <= left) break;
	}
	return 0;
}

int main()
{
	int N, M, i, input;
	int arr[100000]={0};
	scanf("%d", &N);
	
	for(i=0; i<N; i++)
		scanf("%d", &arr[i]);
	
	qsort(arr, N, sizeof(int), intcmp);
	
	scanf("%d", &M);
	for(i=0; i<M; i++)
	{
		scanf("%d", &input);
		printf("%d\n", find(arr, N, input));
	}
	return 0;
}

/*
수 찾기 
N개의 정수 A[1], A[2], …, A[N]이 주어져 있을 때, 
이 안에 X라는 정수가 존재하는지 알아내는 프로그램을 작성하시오.

첫째 줄에 자연수 N(1≤N≤100,000)이 주어진다. 다음 줄에는 N개의 정수 A[1], A[2], …, A[N]이 주어진다. 
다음 줄에는 M(1≤M≤100,000)이 주어진다. 
다음 줄에는 M개의 수들이 주어지는데, 이 수들이 A안에 존재하는지 알아내면 된다. 
모든 정수의 범위는 -231 보다 크거나 같고 231보다 작다.
*/
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

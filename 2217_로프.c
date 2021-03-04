/*
2217번 루프

N(1 ≤ N ≤ 100,000)개의 로프가 있다. 이 로프를 이용하여 이런 저런 물체를 들어올릴 수 있다. 
각각의 로프는 그 굵기나 길이가 다르기 때문에 들 수 있는 물체의 중량이 서로 다를 수도 있다.
하지만 여러 개의 로프를 병렬로 연결하면 각각의 로프에 걸리는 중량을 나눌 수 있다. 
k개의 로프를 사용하여 중량이 w인 물체를 들어올릴 때, 각각의 로프에는 모두 고르게 w/k 만큼의 중량이 걸리게 된다.
각 로프들에 대한 정보가 주어졌을 때, 이 로프들을 이용하여 들어올릴 수 있는 물체의 최대 중량을 구해내는 프로그램을 작성하시오. 
모든 로프를 사용해야 할 필요는 없으며, 임의로 몇 개의 로프를 골라서 사용해도 된다.

첫째 줄에 정수 N이 주어진다. 
다음 N개의 줄에는 각 로프가 버틸 수 있는 최대 중량이 주어진다. 
이 값은 10,000을 넘지 않는 자연수이다.
*/
#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) // 오름차순
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2) return 1;
    if (num1 > num2) return -1;
    return 0;
}
int main()
{
	int N, i, arr[100001]={0};
	long long int max=0, sum;
	scanf("%d", &N);
	
	for(i=0; i<N; i++)
		scanf("%d", &arr[i]);
		
	qsort(arr, N, sizeof(int), compare);
		
	for(i=0; i<N; i++)
	{
		sum = arr[i]*(i+1);
		if(sum > max) max=sum;
	}
	printf("%lld", max);
	return 0;
}

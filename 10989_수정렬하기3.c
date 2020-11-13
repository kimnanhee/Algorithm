/*
수 정렬하기 3
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

첫째 줄에 수의 개수 N(1 ≤ N ≤ 10,000,000)이 주어진다. 
둘째 줄부터 N개의 줄에는 숫자가 주어진다. 
이 수는 10,000보다 작거나 같은 자연수이다.
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

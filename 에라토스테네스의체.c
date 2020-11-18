#include <stdio.h>
#define MAX 10001
int main()
{
	int arr[MAX]={0}; // 0이면 소수 
	int i, j, cnt=0;
	
	arr[1]=1;
	for(i=2; i<=MAX; i++)
	{
		if(arr[i]) continue;
		
		for(j=i+i; j<=MAX; j+=i) arr[j]=1;
	}
	
	for(i=1; i<=MAX; i++)
		if(arr[i]==0) 
		{
			printf("%d\n", i);
			cnt++;
		}	
		
	printf("cnt - %d", cnt);
	return 0; 
} 

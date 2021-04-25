#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, i, max=0, cnt=0;
	scanf("%d", &n);
	int *arr = (int *)malloc(sizeof(int) * (n+1));
	
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
		
	for(i=n-1; i>=0; i--)
	{
		if(arr[i] > max) 
		{
			max=arr[i];
			cnt++;
//			printf("%d\n", max);
		}
	}
	printf("%d", cnt);
		
	return 0;
}

#include <stdio.h>
int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}
int main()
{
	int i, j, k, sum=0, arr[9];
	
	for(i=0; i<9; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	qsort(arr, 9, sizeof(int), compare);
	
	for(i=0; i<9-1; i++)
		for(j=i+1; j<9; j++)
			if(arr[i]+arr[j]==sum-100) 
			{
				for(k=0; k<9; k++)
					if(!(k==i) && !(k==j)) printf("%d\n", arr[k]);
				return 0;
			}
}

#include <stdio.h>
int main()
{
	int n, arr[2000001]={0}, front=-1, back=-1;
	char in[10];
	scanf("%d", &n);
	
	while(n--)
	{
		scanf("%s", in);
		
		if(in[2]=='s') 
		{
			scanf("%d", &arr[++front]);
		}
		else if(in[2]=='p' && in[1]=='o')
		{
			if(front==back) printf("-1\n");
			else {
				printf("%d\n", arr[++back]);
			}
		}
		else if(in[2]=='z') 
		{
			if(front==back) printf("0\n");
			else printf("%d\n", front-back);
		}
		else if(in[2]=='p' && in[3]=='t') 
		{
			if(front==back) printf("1\n");
			else printf("0\n");
		}
		else if(in[2]=='o') 
		{
			if(front==back) printf("-1\n");
			else printf("%d\n", arr[back+1]);
		}
		else
		{
			if(front==back) printf("-1\n");
			else printf("%d\n", arr[front]);
		}
	}
	return 0;
}

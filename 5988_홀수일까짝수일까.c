#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	while(n--)
	{
		char arr[100]={NULL};
		scanf("%s", arr);
		
		char ch = arr[strlen(arr)-1];
		
		if((ch-'0') % 2 == 0) printf("even\n");
		else printf("odd\n");
	}
	return 0;
}

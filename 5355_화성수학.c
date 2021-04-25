#include <stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int i;
		float n;
		char arr[6]={NULL};
		
		scanf("%f", &n);
		gets(arr);
		
		for(i=0; i<6; i++)
		{
			if(arr[i]=='@') n *= 3.0;
			else if(arr[i]=='%') n += 5.0;
			else if(arr[i]=='#') n -= 7.0;
		}
		printf("%.2f\n", n);
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int n;
	int arr[5]={0};
	scanf("%d", &n);
	while(n--) {
		int x, y;
		scanf("%d %d", &x, &y);
		if(x>0 && y>0) arr[0]++;
		else if(x>0 && y<0) arr[3]++;
		else if(x<0 && y>0) arr[1]++;
		else if(x<0 && y<0) arr[2]++;
		else arr[4]++;
	}
	printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	return 0;
}

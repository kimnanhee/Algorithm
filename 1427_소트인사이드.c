/*
1427번 소트인사이드
배열을 정렬하는 것은 쉽다.
수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.

첫째 줄에 정렬하고자하는 수 N이 주어진다. 
N은 1,000,000,000보다 작거나 같은 자연수이다.

첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.
*/
#include <stdio.h>
int main()
{
	char arr[15]={0}, prr[15]={0}; 
	scanf("%s", arr);
	int cur=0;
	
	int i, j;
	for(i=9; i>=0; i--)
	{
		int cnt=0;
		for(j=0; arr[j]; j++)
			if(arr[j]==i+'0') cnt++;

		while(cnt--)
			prr[cur++]=i+'0';		
	}
	printf("%s", prr);
	return 0; 
}

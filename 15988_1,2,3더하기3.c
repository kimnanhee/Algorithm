/*
15988 1, 2, 3 더하기 3

정수 n이 주어졌을 때, n을 1, 2, 3의 합으로 나타내는 방법의 수를 구하는 프로그램을 작성하시오.

첫째 줄에 테스트 케이스의 개수 T가 주어진다. 
각 테스트 케이스는 한 줄로 이루어져 있고, 정수 n이 주어진다. 
n은 양수이며 1,000,000보다 작거나 같다.

각 테스트 케이스마다, n을 1, 2, 3의 합으로 나타내는 방법의 수를 1,000,000,009로 나눈 나머지를 출력한다.
*/
#include <stdio.h>
unsigned int arr[1000001]={0, 1, 2, 4, 7};
unsigned int plus3(int n)
{
	if(arr[n]) return arr[n];
	arr[n] = (plus3(n-1) + plus3(n-2) + plus3(n-3)) % 1000000009;
	return arr[n];
}
int main()
{
	int T, n;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &n);
		printf("%u\n", plus3(n));
	}
	return 0;
}

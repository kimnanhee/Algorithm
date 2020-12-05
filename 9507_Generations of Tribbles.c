/*
9507 Generations of Tribbles

꿍은 군대에서 진짜 할짓이 없다. 그래서 꿍만의 피보나치를 만들어보려고 한다. 
기존의 피보나치는 너무 단순해서 꿍은 좀더 복잡한 피보나치를 만들어보고자 한다. 
그래서 다음과 같은 피보나치를 만들었다. 
꿍만의 피보나치 함수가 koong(n)이라고 할 때,
n < 2 :                         1
n = 2 :                         2
n = 3 :                         4
n > 3 : koong(n - 1) + koong(n - 2) + koong(n - 3) + koong(n - 4)

입력의 첫 번째 줄을 테스트 케이스의 개수 t (0 < t < 69)가 주어진다. 
다음 t줄에는 몇 번째 피보나치를 구해야하는지를 나타내는 n(0 ≤ n ≤ 67)이 주어진다.

각 테스트 케이스에 대해, 각 줄에 꿍 피보나치값을 출력하라.
*/
#include <stdio.h>
unsigned long long dp[68]={0};
unsigned long long koong(int n)
{
	if(dp[n]) return dp[n];
	dp[n] = koong(n-1) + koong(n-2) + koong(n-3) + koong(n-4);
	return dp[n];
}
int main()
{
	int t, n;
	
	dp[0] = dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		printf("%llu\n", koong(n));
	}
	return 0;
}

/*
9507 Generations of Tribbles

���� ���뿡�� ��¥ ������ ����. �׷��� �Ḹ�� �Ǻ���ġ�� �������� �Ѵ�. 
������ �Ǻ���ġ�� �ʹ� �ܼ��ؼ� ���� ���� ������ �Ǻ���ġ�� �������� �Ѵ�. 
�׷��� ������ ���� �Ǻ���ġ�� �������. 
�Ḹ�� �Ǻ���ġ �Լ��� koong(n)�̶�� �� ��,
n < 2 :                         1
n = 2 :                         2
n = 3 :                         4
n > 3 : koong(n - 1) + koong(n - 2) + koong(n - 3) + koong(n - 4)

�Է��� ù ��° ���� �׽�Ʈ ���̽��� ���� t (0 < t < 69)�� �־�����. 
���� t�ٿ��� �� ��° �Ǻ���ġ�� ���ؾ��ϴ����� ��Ÿ���� n(0 �� n �� 67)�� �־�����.

�� �׽�Ʈ ���̽��� ����, �� �ٿ� �� �Ǻ���ġ���� ����϶�.
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

/*
1037 ���
��� A�� N�� ��¥ ����� �Ƿ���, N�� A�� ����̰�, A�� 1�� N�� �ƴϾ�� �Ѵ�. 
� �� N�� ��¥ ����� ��� �־��� ��, N�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù° �ٿ� N�� ��¥ ����� ������ �־�����. 
�� ������ 50���� �۰ų� ���� �ڿ����̴�. 
��° �ٿ��� N�� ��¥ ����� �־�����. 
1,000,000���� �۰ų� ����, 2���� ũ�ų� ���� �ڿ����̰�, �ߺ����� �ʴ´�.
*/
#include <stdio.h>
int main()
{
	int T, max, min, input;
	scanf("%d", &T);
	
	T--;
	scanf("%d", &input);
	max = min = input;
	
	while(T--)
	{
		scanf("%d", &input);
		if(input > max) max = input;
		if(input < min) min = input;
	}
	printf("%d", min*max);
	return 0;
}

/*
1244 ����ġ �Ѱ� ����

1���� ���������� ��ȣ�� �پ��ִ� ����ġ���� �ִ�. 
����ġ�� ���� �ְų� �����ִ� �����̴�. 
<�׸� 1>�� ����ġ 8���� ���°� ǥ�õǾ� �ִ�. 
��1���� ����ġ�� ���� ������, ��0���� ���� ������ ��Ÿ����. 
�׸��� �л� �� ���� �̾Ƽ�, �л��鿡�� 1 �̻��̰� ����ġ ���� ������ �ڿ����� �ϳ��� �������־���. 
�л����� �ڽ��� ������ ���� ���� ���� �Ʒ��� ���� ������� ����ġ�� �����ϰ� �ȴ�.

����ġ�� ���¸� 1�� ����ġ���� �����Ͽ� ������ ����ġ���� �� �ٿ� 20���� ����Ѵ�. 
���� ��� 21�� ����ġ�� �ִٸ� �� ����ġ�� ���´� ��° �� �� �տ� ����Ѵ�. 
���� ����ġ�� 1, ���� ����ġ�� 0���� ǥ���ϰ�, ����ġ ���� ���̿� ��ĭ�� �ϳ��� �д�.
*/
#include <stdio.h>
int main()
{
	int i, j, n, people, gender, number, arr[101]={0};
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
		scanf("%d", &arr[i]);
	
	scanf("%d", &people);
	for(i=0; i<people; i++)
	{
		scanf("%d %d", &gender, &number);
		if(gender == 1)
		{
			j=number;
			while(j<=n)
			{
				arr[j] = !arr[j];
				j += number;
			}
		}
		else if(gender == 2)
		{
			arr[number] = !arr[number];
			j=1;
			while(number-j >= 1 && number+j <= n)
			{
				if(arr[number-j] != arr[number+j]) break;
				arr[number-j] = !arr[number-j];
				arr[number+j] = !arr[number+j];
				j++;
			}
		}
	}
	
	for(i=1; i<=n; i++)
	{
		printf("%d ", arr[i]);
		if(i%20 == 0) printf("\n");
	}
		
	return 0;
}

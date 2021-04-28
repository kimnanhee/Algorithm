#include <stdio.h>
int arr[10]={0};

int check(int n)
{
	while(n>9)
	{
		if(arr[n%10]) return 0;
		n /= 10;
	}
	return (arr[n]? 0:1);
}

int len(int n)
{
	if(n==0) return 1;
	int cnt=0;
	while(n)
	{
		n /= 10;
		cnt++;
	}
	return cnt;
}
int main()
{
	int n, m, i, j;
	int len_pm, len_btn=1000000;
	scanf("%d", &n);
	scanf("%d", &m);
	len_pm = (n>100 ? (n-100) : (100-n)); // +-�θ� �̵��ϱ�
	
	for(i=0; i<m; i++) // ���峭 ��ư �Է¹ޱ�
	{ 
		scanf("%d", &j);
		arr[j]=1;
	}
	for(i=0; i<1000000; i++)
	{
		if(check(i)) // i ��ư�� ���� �� ���� ���
		{
			int value = (i>n ? (i-n) : (n-i)) + len(i); // n�� i�� �Ÿ� + i�� ���� 
			if(len_btn>value) len_btn=value; // �ּڰ� ���� 
		}
	}
	printf("%d", (len_pm>len_btn ? len_btn : len_pm)); 
	return 0; 
}

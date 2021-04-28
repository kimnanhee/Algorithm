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
	len_pm = (n>100 ? (n-100) : (100-n)); // +-로만 이동하기
	
	for(i=0; i<m; i++) // 고장난 버튼 입력받기
	{ 
		scanf("%d", &j);
		arr[j]=1;
	}
	for(i=0; i<1000000; i++)
	{
		if(check(i)) // i 버튼을 누를 수 있을 경우
		{
			int value = (i>n ? (i-n) : (n-i)) + len(i); // n과 i의 거리 + i의 길이 
			if(len_btn>value) len_btn=value; // 최솟값 저장 
		}
	}
	printf("%d", (len_pm>len_btn ? len_btn : len_pm)); 
	return 0; 
}

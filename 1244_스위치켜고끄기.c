/*
1244 스위치 켜고 끄기

1부터 연속적으로 번호가 붙어있는 스위치들이 있다. 
스위치는 켜져 있거나 꺼져있는 상태이다. 
<그림 1>에 스위치 8개의 상태가 표시되어 있다. 
‘1’은 스위치가 켜져 있음을, ‘0’은 꺼져 있음을 나타낸다. 
그리고 학생 몇 명을 뽑아서, 학생들에게 1 이상이고 스위치 개수 이하인 자연수를 하나씩 나누어주었다. 
학생들은 자신의 성별과 받은 수에 따라 아래와 같은 방식으로 스위치를 조작하게 된다.

스위치의 상태를 1번 스위치에서 시작하여 마지막 스위치까지 한 줄에 20개씩 출력한다. 
예를 들어 21번 스위치가 있다면 이 스위치의 상태는 둘째 줄 맨 앞에 출력한다. 
켜진 스위치는 1, 꺼진 스위치는 0으로 표시하고, 스위치 상태 사이에 빈칸을 하나씩 둔다.
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

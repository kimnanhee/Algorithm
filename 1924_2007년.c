/*
1924번 2007년

오늘은 2007년 1월 1일 월요일이다. 그렇다면 2007년 x월 y일은 무슨 요일일까? 
이를 알아내는 프로그램을 작성하시오.

첫째 줄에 빈 칸을 사이에 두고 x(1 ≤ x ≤ 12)와 y(1 ≤ y ≤ 31)이 주어진다.
참고로 2007년에는 1, 3, 5, 7, 8, 10, 12월은 31일까지, 4, 6, 9, 11월은 30일까지, 2월은 28일까지 있다.
*/
#include <stdio.h>
int main()
{
	int x, y;
	char day[7][5]={"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	scanf("%d %d", &x, &y);
	
	int i, j, cnt=0;
	for(i=1; i<=x; i++)
	{
		for(j=1; j<=31; j++)
		{
			cnt++;
			
			if(i==x && j==y) break;
			
			if(i==2 && j==28) break;
			else if(j==30 && (i==4 || i==6 || i==9 || i==11)) break;
		}
	}
	printf("%s", day[cnt%7]);
	return 0;
}

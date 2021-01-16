/*
10757번 큰 수 A+B
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

첫째 줄에 A와 B가 주어진다. (0 < A,B < 1010000)

첫째 줄에 A+B를 출력한다.
*/
#include <stdio.h>
#include <string.h>
#define Ctoi(X) (X==0 ? 0:X-'0')
void reverse(char* arr, int len)
{
	int i;
	for(i=0; i<len/2; i++)
	{
		char tmp = arr[i];
		arr[i] = arr[len-1-i];
		arr[len-1-i] = tmp;
	}
	return;
}
int main()
{
	char arr[2][100001]={0};
	char result[100001]={0};
	scanf("%s %s", arr[0], arr[1]);
	
	int len = (strlen(arr[0])>strlen(arr[1]) ? strlen(arr[0]):strlen(arr[1]));
	
	reverse(arr[0], strlen(arr[0]));
	reverse(arr[1], strlen(arr[1]));
	
	int i, up;
	for(i=0; i<=len; i++)
	{
		int num = Ctoi(arr[0][i]) + Ctoi(arr[1][i]) + Ctoi(result[i]);
		if(num > 9)
		{
			result[i]=num-10+'0';
			result[i+1]='1';
		}
		else 
		{
			result[i]=num+'0';
		}
	}
	if(result[len]=='0') result[len]=0;
	reverse(result, strlen(result));
	
	printf("%s", result);
	return 0;
}

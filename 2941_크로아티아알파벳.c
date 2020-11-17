/*
크로아티아 알파벳 
예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다. 
따라서, 다음과 같이 크로아티아 알파벳을 변경해서 입력했다.

크로아티아 알파벳 변경
?   	c=
?	    c-
d?	    dz=
đ		d-
lj		lj
nj		nj
?		s=
?		z=
예를 들어, ljes=njak은 크로아티아 알파벳 6개(lj, e, ?, nj, a, k)로 이루어져 있다. 
단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.
d?는 무조건 하나의 알파벳으로 쓰이고, d와 ?가 분리된 것으로 보지 않는다. 
lj와 nj도 마찬가지이다. 
위 목록에 없는 알파벳은 한 글자씩 센다.

첫째 줄에 최대 100글자의 단어가 주어진다.알파벳 소문자와 '-', '='로만 이루어져 있다.
단어는 크로아티아 알파벳으로 이루어져 있다. 문제 설명의 표에 나와있는 알파벳은 변경된 형태로 입력된다.
*/
#include <stdio.h>
int main()
{
	char arr[101]={0};
	scanf("%s", arr);
	
	int cnt=0, i;
	for(i=0; arr[i]; i++)
	{
		cnt++;
		if(arr[i]=='=')
		{
			if(arr[i-1]=='c' || arr[i-1]=='s') cnt--;
			else if(arr[i-1]=='z' && arr[i-2]!='d') cnt--;
			else if(arr[i-1]=='z' && arr[i-2]=='d') cnt-=2;
		}
		else if(arr[i]=='-')
		{
			if(arr[i-1]=='c' || arr[i-1]=='d') cnt--;
		}
		else if(arr[i]=='j')
		{
			if(arr[i-1]=='l' || arr[i-1]=='n') cnt--;
		}
	}
	printf("%d", cnt);
	return 0;
}

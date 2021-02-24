#include <stdio.h>
int n, start, finish;
int arr[101][101]={0};
int visit[101]={0};
int chon=0, last_chon;
	
void BFS(int a)
{
//	printf("visit %d\n", a);
	visit[a]=1;
	chon++;
	if(a==finish) 
	{
		last_chon=chon;
//		printf("---------------------------------\n");
		return;
	}
	
	int i;
	for(i=1; i<=n; i++)
	{
		if(visit[i]==0 && arr[a][i]==1) BFS(i);
	}
	chon--;
//	printf("back\n");
}

int main()
{
	int m, parent, child;
	
	scanf("%d", &n); // 사람 수 
	scanf("%d %d", &start, &finish);
	scanf("%d", &m); // 관계의 개수 
	while(m--)
	{
		scanf("%d %d", &parent, &child); // 부모, 자식 번호 
		arr[parent][child]=arr[child][parent]=1;
	}
	BFS(start);
	if(last_chon==0)
	{
		printf("-1");
		return 0;
	}
	printf("%d", last_chon-1);
	return 0;
}

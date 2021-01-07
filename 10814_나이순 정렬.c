/*
10814 ���̼� ����
�¶��� ������ ������ ������� ���̿� �̸��� ������ ������� �־�����. 
�̶�, ȸ������ ���̰� �����ϴ� ������, ���̰� ������ ���� ������ ����� �տ� ���� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù° �ٿ� �¶��� ���� ȸ���� �� N�� �־�����. (1 �� N �� 100,000)
��° �ٺ��� N���� �ٿ��� �� ȸ���� ���̿� �̸��� �������� ���еǾ� �־�����. 
���̴� 1���� ũ�ų� ������, 200���� �۰ų� ���� �����̰�, �̸��� ���ĺ� ��ҹ��ڷ� �̷���� �ְ�, ���̰� 100���� �۰ų� ���� ���ڿ��̴�. 
�Է��� ������ ������ �־�����.
*/
#include <stdio.h>
#include <stdlib.h>
struct info {
	int index;
	int age;
	char name[101];
};

int compare(const void* a, const void* b)
{
	struct info* fir = (struct info*)a;
	struct info* sec = (struct info*)b;
	
	if (fir->age != sec->age) return fir->age-sec->age;
	else return fir->index-sec->index;
}

int main()
{
	int n, i;
	scanf("%d", &n);
	
	struct info* arr = malloc(sizeof(struct info)*n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d %s", &arr[i].age, arr[i].name);
		arr[i].index = i;
	}
	
	qsort(arr, n, sizeof(struct info), compare);
	
	for(i=0; i<n; i++)
		printf("%d %s\n", arr[i].age, arr[i].name);
	
	return 0;
}

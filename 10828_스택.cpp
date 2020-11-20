/*
10828 ����
������ �����ϴ� ������ ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.
����� �� �ټ� �����̴�.
push X: ���� X�� ���ÿ� �ִ� �����̴�.
pop: ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���ÿ� ����ִ� ������ ������ ����Ѵ�.
empty: ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
top: ������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

ù° �ٿ� �־����� ����� �� N (1 �� N �� 10,000)�� �־�����. 
��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. 
�־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. 
������ �������� ���� ����� �־����� ���� ����.

STL stack�� ����ؼ� ���� 
*/
#include <iostream>
#include <stack>
using namespace std;
int main()
{
	stack<int> s;
	int T, input;
	string arr;

	cin >> T;
	while (T--)
	{
		arr.clear();
		cin >> arr;

		if (!arr.compare("push"))
		{
			cin >> input;
			s.push(input);
		}
		else if (!arr.compare("pop"))
		{
			if (s.size())
			{
				cout << s.top() << endl;
				s.pop();
			}
			else cout << "-1" << endl;
		}
		else if (!arr.compare("size")) cout << s.size() << endl;
		else if (!arr.compare("top"))
		{
			if (s.size())
			{
				cout << s.top() << endl;
			}
			else cout << "-1" << endl;
		}
		else if (!arr.compare("empty")) cout << s.empty() << endl;
	}
	return 0;
}

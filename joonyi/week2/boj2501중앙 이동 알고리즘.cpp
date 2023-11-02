// boj 2903 중앙 이동 알고리즘 https://www.acmicpc.net/problem/2903 (231101)
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int line = 2;
	for (int i = 0; i < n; i++)
	{
		line += (line - 1);
	}

	cout << line * line << '\n';
}
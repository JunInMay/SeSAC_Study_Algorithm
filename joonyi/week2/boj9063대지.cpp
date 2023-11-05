// 23.11.05 https://www.acmicpc.net/problem/9063 boj 9063 대지
# include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int point_count;
	int x, y;

	cin >> point_count;

	int min_x = 10001, max_x = -10001, min_y = 10001, max_y = -10001;
	for (int i = 0; i < point_count; i++)
	{
		cin >> x >> y;

		if (x < min_x)
			min_x = x;
		if (x > max_x)
			max_x = x;
		if (y < min_y)
			min_y = y;
		if (y > max_y)
			max_y = y;
	}

	cout << abs(max_x - min_x) * abs(max_y - min_y);
}
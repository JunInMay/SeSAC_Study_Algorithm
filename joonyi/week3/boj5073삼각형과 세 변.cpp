// https://www.acmicpc.net/problem/5073 boj 5073 삼각형과 세 변
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	while (1)
	{
		cin >> a >> b >> c;

		if (a == 0 || b == 0 || c == 0)
			break;

		string result = "Invalid";
		if (a < b + c && b < a + c && c < a + b)
		{
			if (a == b && b == c)
				result = "Equilateral";
			else if (a == b || b == c || c == a)
				result = "Isosceles";
			else
				result = "Scalene";
		}

		cout << result << '\n';
	}

}
// https://www.acmicpc.net/problem/9063
// 23.11.06 boj 19790 Загадочное уравнение 신비한 방정식
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;

	// 0일 경우 무조건 답은 1
	int result = 2;
	if (n == 0)
		result = 1;

	/**
	* x + y + xy = n 에서 
	* (x+1)*(y+1) = n + 1 을 도출할 수 있다.
	* 즉 x + y + xy = n 을 만족하는 정수 x, y 쌍의 개수를 구하라는 말은
	* (x+1)*(y+1) = n + 1 을 만족하는 정수 x, y 쌍의 개수를 구하라는 말과 똑같다.
	* 정수를 구해야 하므로, n + 1 을 임의의 수 a로 나눴을 때 나누어 떨어지는(0포함) 수, 즉 약수의 개수를 구하면 된다.
	*/

	n++;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			if (i == sqrt(n))
				result += 1;
			else
				result += 2;
		}
	}

	cout << result;
}
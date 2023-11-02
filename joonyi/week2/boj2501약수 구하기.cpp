// BOJ 2501 약수 구하기 https://www.acmicpc.net/problem/2501
#include <iostream>

using namespace std;

int main()
{
	int n, k;

	cin >> n >> k;

	int measure_count = 0;
	int result = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			measure_count++;

		if (measure_count == k)
		{
			result = i;
			break;
		}
	}

	cout << result;
}
#include <iostream>
#include <cmath>

int Function(int N, int R, int C)
{
	if (N == 0)
	{
		return 0;
	}
	int Half = std::pow(2, N - 1);
	if (R < Half && C < Half)
	{
		return Function(N - 1, R, C);
	}
	if (R < Half && C >= Half)
	{
		return Half * Half + Function(N - 1, R, C - Half);
	}
	if (R >= Half && C < Half)
	{
		return 2 * Half * Half + Function(N - 1, R - Half, C);
	}
	return 3 * Half * Half + Function(N - 1, R - Half, C - Half);
}

int main()
{
	int N, R, C;
	std::cin >> N >> R >> C;
	std:: cout << Function(N, R, C);

	return 0;
}
#include <iostream>

long long Pow(long long A, long long B, long long C)
{
	if (B == 1)
	{
		return A % C;
	}
	long long Half = Pow(A, B / 2, C);
	Half = Half * Half % C;
	if (0 == B % 2)
	{
		return Half;
	}
	return Half * A % C;
}

int main()
{
	long long A = 0, B = 0, C = 0;
	std::cin >> A >> B >> C;

	std::cout << Pow(A, B, C);
	return 0;
}
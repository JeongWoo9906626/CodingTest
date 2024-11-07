#include <iostream>

bool IsPrime(long long Number)
{
	if (Number == 1)
	{
		return false;
	}
	if (Number == 2 || Number == 3)
	{
		return true;
	}
	if (0 == Number % 2 || 0 == Number % 3)
	{
		return false;
	}
	for (long long i = 5; i * i <= Number; i += 2)
	{
		if (0 == Number % i)
		{
			return false;
		}
	}
	return true;
}

long long Next(long long Number)
{
	while (false == IsPrime(Number))
	{
		++Number;
	}
	return Number;
}

int main()
{
	int n = 0;
	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		long long Number = 0;
		std::cin >> Number;
		std::cout << Next(Number) << std::endl;
	}

	return 0;
}
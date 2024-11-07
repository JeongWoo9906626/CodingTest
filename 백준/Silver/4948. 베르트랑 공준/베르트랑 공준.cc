#include <iostream>

bool IsPrime(int Number)
{
	if (1 == Number)
	{
		return false;
	}
	if (2 == Number || 3 == Number)
	{
		return true;
	}
	if (0 == Number % 2 || 0 == Number % 3)
	{
		return false;
	}

	for (int i = 5; i * i <= Number; i += 6)
	{
		if (0 == Number % i || 0 == Number % (i + 2))
		{
			return false;
		}
	}
	return true;
}

int PrimeCount(int Number)
{
	int Count = 0;
	for (int i = Number + 1; i <= 2 * Number; ++i)
	{
		if (true == IsPrime(i))
		{
			++Count;
		}
	}
	return Count;
}

int main()
{
	while (true)
	{
		int Input = 0;
		std::cin >> Input;
		if (0 == Input)
		{
			break;
		}
		std::cout << PrimeCount(Input) << std::endl;
	}
	return 0;
}
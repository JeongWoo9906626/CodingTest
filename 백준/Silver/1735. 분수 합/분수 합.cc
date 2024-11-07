#include <iostream>

int GCD(int A, int B)
{
	while (B != 0)
	{
		int Temp = B;
		B = A % B;
		A = Temp;
	}
	return A;
}

int main()
{
	int FirstDenominator = 0;
	int FirstNumberator = 0;

	int SecondDenominator = 0;
	int SecondNumberator = 0;

	std::cin >> FirstNumberator >> FirstDenominator;
	std::cin >> SecondNumberator >> SecondDenominator;

	int Demoniator = FirstDenominator * SecondDenominator;
	int Numberator = FirstNumberator * SecondDenominator + SecondNumberator * FirstDenominator;

	if (1 != GCD(Numberator, Demoniator))
	{
		std::cout << Numberator / GCD(Numberator, Demoniator) << " " << Demoniator / GCD(Numberator, Demoniator) << std::endl;
	}
	else
	{
		std::cout << Numberator << " " << Demoniator << std::endl;
	}

	return 0;
}
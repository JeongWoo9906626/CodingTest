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

int LCM(int A, int B)
{
	return A / GCD(A, B) * B;
}


int main()
{
	int InputNumber;
	std::cin >> InputNumber;

	
	for (int i = 0; i < InputNumber; ++i)
	{
		int A = 0;
		int B = 0;
		std::cin >> A >> B;
		std::cout << LCM(A, B) << std::endl;
	}


	return 0;
}
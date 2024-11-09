#include <iostream>
int Fibo(int Number)
{
	if (0 == Number)
	{
		return 0;
	}
	if (1 == Number)
	{
		return 1;
	}

	return Fibo(Number - 1) + Fibo(Number - 2);
}


int main()
{
	int answer = 1;
	int n = 0;
	std::cin >> n;

	std::cout << Fibo(n);

	return 0;
}
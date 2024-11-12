#include <iostream>

void Function(int A, int B, int Number)
{
	if (Number == 1)
	{
		std::cout << A << ' ' << B << '\n';
		return;
	}
	Function(A, 6 - A - B, Number - 1);
	std::cout << A << ' ' << B << '\n';
	Function(6 - A - B, B, Number - 1);
}

int main()
{
	int k = 0;
	std::cin >> k;
	std::cout << (1 << k) - 1 << '\n';
	Function(1, 3, k);

	return 0;
}
#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int count = 0;
	for (int i = 2; i <= n; count++)
	{
		i += 6 * count;
	}
	if (n == 1)
	{
		count = 1;
	}
	std::cout << count;
	return 0;
}
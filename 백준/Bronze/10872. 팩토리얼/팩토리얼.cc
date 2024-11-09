#include <iostream>
int main()
{
	int answer = 1;
	int N = 0;
	std::cin >> N;

	while (N != 0)
	{
		answer *= N;
		--N;
	}
	std::cout << answer;

	return 0;
}
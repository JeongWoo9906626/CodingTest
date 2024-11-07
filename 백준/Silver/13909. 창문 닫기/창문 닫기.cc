#include <iostream>
#include <cmath>
int main()
{
	int Input = 0;
	std::cin >> Input;
	int Count = static_cast<int>(std::sqrt(Input));

    std::cout << Count << std::endl;
	return 0;
}
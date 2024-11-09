#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
    int InputNumber = 0;
    std::cin >> InputNumber;
    
    for (int i = InputNumber; i > 0; --i)
    {
        std::cout << i << '\n';
    }
    return 0;
}
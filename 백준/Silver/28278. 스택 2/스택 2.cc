#include <iostream>
#include <stack>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
	int InputNumber = 0;
	std::cin >> InputNumber;

	std::stack<int> Stack;
	for (int i = 0; i < InputNumber; ++i)
	{
		int Order = 0;
		int Number = 0;
		std::cin >> Order;
		switch (Order)
		{
		case 1:
			std::cin >> Number;
			Stack.push(Number);
			break;
		case 2:
			if (true == Stack.empty())
			{
				std::cout << -1 << "\n";
			}
			else
			{
				std::cout << Stack.top() << "\n";
				Stack.pop();
			}
			break;
		case 3:
			std::cout << Stack.size() << "\n";
			break;
		case 4:
			if (true == Stack.empty())
			{
				std::cout << 1 << "\n";
			}
			else
			{
				std::cout << 0 << "\n";
			}
			break;
		case 5:
			if (true == Stack.empty())
			{
				std::cout << -1 << "\n";
			}
			else
			{
				std::cout << Stack.top() << "\n";
			}
			break;
		}
	}

	return 0;
}
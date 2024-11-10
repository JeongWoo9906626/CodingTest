#include <iostream>
#include <string>
#include <queue>


int main()
{
	std::queue<int> Queue;
	int InputNumber = 0;
	std::cin >> InputNumber;
	for (int i = 0; i < InputNumber; ++i)
	{
		std::string Order;
		std::cin >> Order;

		if ("push" == Order)
		{
			int Number = 0;
			std::cin >> Number;
			Queue.push(Number);
		}
		else if ("pop" == Order)
		{
			if (true == Queue.empty())
			{
				std::cout << -1 << '\n';
				continue;
			}
			std::cout << Queue.front() << '\n';
			Queue.pop();
		}
		else if ("size" == Order)
		{
			std::cout << Queue.size() << '\n';
		}
		else if ("empty" == Order)
		{
			if (true == Queue.empty())
			{
				std::cout << 1 << '\n';
			}
			else
			{
				std::cout << 0 << '\n';
			}
		}
		else if ("front" == Order)
		{
			if (true == Queue.empty())
			{
				std::cout << -1 << '\n';
				continue;
			}
			std::cout << Queue.front() << '\n';
		}
		else if ("back" == Order)
		{
			if (true == Queue.empty())
			{
				std::cout << -1 << '\n';
				continue;
			}
			std::cout << Queue.back() << '\n';
		}
	}

	return 0;
}
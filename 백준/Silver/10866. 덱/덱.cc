#include <iostream>
#include <string>
#include <queue>


int main()
{
	std::deque<int> Deque;
	int InputNumber = 0;
	std::cin >> InputNumber;
	for (int i = 0; i < InputNumber; ++i)
	{
		std::string Order;
		std::cin >> Order;

		if ("push_front" == Order)
		{
			int Number = 0;
			std::cin >> Number;
			Deque.push_front(Number);
		}
		else if ("push_back" == Order)
		{
			int Number = 0;
			std::cin >> Number;
			Deque.push_back(Number);
		}
		else if ("pop_front" == Order)
		{
			if (true == Deque.empty())
			{
				std::cout << -1 << '\n';
				continue;
			}
			std::cout << Deque.front() << '\n';
			Deque.pop_front();
		}
		else if ("pop_back" == Order)
		{
			if (true == Deque.empty())
			{
				std::cout << -1 << '\n';
				continue;
			}
			std::cout << Deque.back() << '\n';
			Deque.pop_back();
		}
		else if ("size" == Order)
		{
			std::cout << Deque.size() << '\n';
		}
		else if ("empty" == Order)
		{
			if (true == Deque.empty())
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
			if (true == Deque.empty())
			{
				std::cout << -1 << '\n';
				continue;
			}
			std::cout << Deque.front() << '\n';
		}
		else if ("back" == Order)
		{
			if (true == Deque.empty())
			{
				std::cout << -1 << '\n';
				continue;
			}
			std::cout << Deque.back() << '\n';
		}
	}

	return 0;
}
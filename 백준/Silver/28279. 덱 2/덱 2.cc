#include <iostream>
#include <stack>
#include <queue>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
	int InputNumber = 0;
	std::cin >> InputNumber;
	std::deque<int> Deque;
	for (int i = 0; i < InputNumber; ++i)
	{
		int Order = 0;
		int Number = 0;
		std::cin >> Order;
		switch (Order)
		{
		case 1:
			std::cin >> Number;
			Deque.push_front(Number);
			break;
		case 2:
			std::cin >> Number;
			Deque.push_back(Number);
			break;
		case 3:
			if (false == Deque.empty())
			{
				std::cout << Deque.front() << "\n";
				Deque.pop_front();
			}
			else
			{
				std::cout << -1 << "\n";
			}
			break;
		case 4:
			if (false == Deque.empty())
			{
				std::cout << Deque.back() << "\n";
				Deque.pop_back();
			}
			else
			{
				std::cout << -1 << "\n";
			}
			break;
		case 5:
			std::cout << Deque.size() << "\n";
			break;
		case 6:
			if (false == Deque.empty())
			{
				std::cout << 0 << "\n";
			}
			else
			{
				std::cout << 1 << "\n";
			}
			break;
		case 7:
			if (false == Deque.empty())
			{
				std::cout << Deque.front() << "\n";
			}
			else
			{
				std::cout << -1 << "\n";
			}
			break;
		case 8:
			if (false == Deque.empty())
			{
				std::cout << Deque.back() << "\n";
			}
			else
			{
				std::cout << -1 << "\n";
			}
			break;
		}
	}
	
	return 0;
}
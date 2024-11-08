#include <iostream>
#include <stack>
#include <queue>

int main()
{
	int InputNumber = 0;
	std::cin >> InputNumber;
	std::queue<int> First;
	for (int i = 0; i < InputNumber; ++i)
	{
		int Number = 0;
		std::cin >> Number;
		First.push(Number);
	}
	int FirstNumber = 1;
	std::stack<int> Delay;
	
	while (false == First.empty() || false == Delay.empty())
	{
		if (false == First.empty() && First.front() == FirstNumber)
		{
			First.pop();
			++FirstNumber;
		}
		else if (false == Delay.empty() && Delay.top() == FirstNumber)
		{
			Delay.pop();
			++FirstNumber;
		}
		else if (false == First.empty())
		{
			Delay.push(First.front());
			First.pop();
		}
		else
		{
			break;
		}
	}

	if (FirstNumber == InputNumber + 1)
	{
		std::cout << "Nice" << std::endl;
	}
	else
	{
		std::cout << "Sad" << std::endl;
	}

	return 0;
}
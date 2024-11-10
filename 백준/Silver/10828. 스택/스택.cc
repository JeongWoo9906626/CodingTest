#include <iostream>
#include <string>
#include <stack>

std::stack<int> Stack;

void Push()
{
	int Number;
	std::cin >> Number;
	Stack.push(Number);
}

void Size()
{
	std::cout << Stack.size() << '\n';
}

bool Empty()
{
	return Stack.empty();
}

void Top()
{
	if (true == Empty())
	{
		std::cout << -1 << '\n';
		return;
	}
	std::cout << Stack.top() << '\n';
}

void Pop()
{
	if (true == Empty())
	{
		std::cout << -1 << '\n';
		return;
	}
	std::cout << Stack.top() << '\n';
	Stack.pop();
}

int main()
{
	int InputNumber = 0;
	std::cin >> InputNumber;
	for (int i = 0; i < InputNumber; ++i)
	{
		std::string Order;
		std::cin >> Order;

		if ("push" == Order)
		{
			Push();
		}
		else if ("pop" == Order)
		{
			Pop();
		}
		else if ("size" == Order)
		{
			Size();
		}
		else if ("empty" == Order)
		{
			if (true == Empty())
			{
				std::cout << 1 << '\n';
			}
			else
			{
				std::cout << 0 << '\n';
			}
		}
		else if ("top" == Order)
		{
			Top();
		}
	}

	return 0;
}
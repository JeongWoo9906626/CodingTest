#include <iostream>
#include <string>
#include <stack>

int main()
{
	while (true)
	{
		std::string Sentence;
		std::getline(std::cin, Sentence);
		if (Sentence == ".")
		{
			break;
		}
		std::stack<char> Stack;
		bool Check = true;
		for (const char& Word : Sentence)
		{
			if (Word == '(' || Word == '[')
			{
				Stack.push(Word);
			}
			if (Word == ')')
			{
				if (true == Stack.empty() || Stack.top() != '(')
				{
					Check = false;
					break;
				}
				Stack.pop();
			}
			if (Word == ']')
			{
				if (true == Stack.empty() || Stack.top() != '[')
				{
					Check = false;
					break;
				}
				Stack.pop();
			}
		}

		if (Check == false)
		{
			std::cout << "no" << '\n';
		}
		else
		{
			if (Stack.empty() == true)
			{
				std::cout << "yes" << '\n';
			}
			else
			{
				std::cout << "no" << '\n';
			}
		}
	}
	
	
	return 0;
}
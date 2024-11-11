#include <iostream>
#include <string>
#include <stack>

int main()
{
	int answer = 0;
	std::string Sentence;
	std::cin >> Sentence;
	
	std::stack<char> Stack;
	int Value = 1;

	for (int i = 0; i < Sentence.size(); ++i)
	{
		char Word = Sentence[i];

		if (Word == '(')
		{
			Stack.push(Word);
			Value *= 2;
		}
		else if (Word == '[')
		{
			Stack.push(Word);
			Value *= 3;
		}
		else if (Word == ')')
		{
			if (true == Stack.empty() || Stack.top() != '(')
			{
				std::cout << 0;
				return 0;
			}
			
			if (Sentence[i - 1] == '(')
			{
				answer += Value;
			}

			Value /= 2;
			Stack.pop();
		}
		else if (Word == ']')
		{
			char Prev = Sentence[i - 1];
			if (true == Stack.empty() || Stack.top() != '[')
			{
				std::cout << 0;
				return 0;
			}
			
			if (Sentence[i - 1] == '[')
			{
				answer += Value;
			}
			Value /= 3;
			Stack.pop();
		}
	}

	if (false == Stack.empty())
	{
		std::cout << 0;
	}
	else
	{
		std::cout << answer;
	}

	return 0;
}
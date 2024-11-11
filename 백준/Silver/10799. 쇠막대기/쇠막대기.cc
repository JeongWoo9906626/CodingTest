#include <iostream>
#include <string>
#include <stack>

int main()
{
	int answer = 0;
	std::string Sentence;
	std::cin >> Sentence;
	
	std::stack<char> Stack;

	for (int i = 0; i < Sentence.size(); ++i)
	{
		char Word = Sentence[i];

		if (Word == '(')
		{
			Stack.push(Word);
		}
		else
		{
			Stack.pop();
			
			if (Sentence[i - 1] == '(')
			{
				answer += Stack.size();
			}
			else
			{
				answer += 1;
			}
		}
	}

	std::cout << answer;

	return 0;
}
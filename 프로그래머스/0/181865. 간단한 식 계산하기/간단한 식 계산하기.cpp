#include <string>
#include <vector>

using namespace std;

int solution(string binomial) 
{
	int answer = 0;

	int Count = 0;
	int Left = 0;
	int Right = 0;
	char Object;
	int TempIndex = 0;
	for (int i = 0; i < binomial.size(); ++i)
	{
		if (' ' == binomial[i])
		{
			++Count;
			switch (Count)
			{
			case 1:
			{
				TempIndex = i + 1;
				std::string Temp = "";
				for (int j = 0; j < i; ++j)
				{
					Temp += binomial[j];
				}
				Left = std::stoi(Temp);
				break;
			}
			case 2:
			{
				std::string Temp = "";
				for (int j = i + 1; j < binomial.size(); ++j)
				{
					Temp += binomial[j];
				}
				Right = std::stoi(Temp);
				break;
			}
			}
		}
	}
	Object = binomial[TempIndex];

	switch (Object)
	{
	case '+':
		answer = Left + Right;
		break;
	case '-':
		answer = Left - Right;
		break;
	case '*':
		answer = Left * Right;
		break;
	}

	return answer;
}
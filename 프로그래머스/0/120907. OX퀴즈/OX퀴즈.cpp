#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> quiz) 
{
	std::vector<std::string> answer;

	for (std::string Solve : quiz)
	{
		
		std::vector<std::string> T;
		char Operator = ' ';
		for (int i = 0; i < 5; ++i)
		{
			int Temp = Solve.find(" ");
			if (Temp != std::string::npos)
			{
				T.push_back(Solve.substr(0, Temp));
				Solve = Solve.substr(Temp + 1);
			}
			else
			{
				T.push_back(Solve);
			}
		}
		
		int Check = 0;
		Operator = T[1][0];
		switch (Operator)
		{
		case '+':
			Check = std::stoi(T[0]) + std::stoi(T[2]);
			break;
		case '-':
			Check = std::stoi(T[0]) - std::stoi(T[2]);
			break;
		}

		if (Check == std::stoi(T[4]))
		{
			answer.push_back("O");
		}
		else
		{
			answer.push_back("X");
		}

	}


	return answer;
}
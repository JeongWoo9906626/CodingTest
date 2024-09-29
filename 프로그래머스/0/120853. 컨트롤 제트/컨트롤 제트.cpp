#include <string>
#include <vector>
#include <sstream>
#include <stack>

using namespace std;

int solution(string s) 
{
	int answer = 0;

	std::stringstream StringStream = std::stringstream(s);
	std::stack<int> AddNumber;
	std::string Temp;
	while (StringStream >> Temp)
	{
		int Number = 0;
		if (Temp == "Z")
		{
			AddNumber.pop();
		}
		else 
		{
			int Number = std::stoi(Temp);
			AddNumber.push(Number);
		}
	}

	while (false == AddNumber.empty())
	{
		answer += AddNumber.top();
		AddNumber.pop();
	}

	return answer;
}
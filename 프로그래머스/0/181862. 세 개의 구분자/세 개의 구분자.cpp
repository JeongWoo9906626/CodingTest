#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) 
{
	std::vector<std::string> answer;

	std::string Temp;
	for (int i = 0; i < myStr.size(); ++i)
	{
		if ('a' == myStr[i] || 'b' == myStr[i] || 'c' == myStr[i])
		{
			if (0 != Temp.size())
			{
				answer.emplace_back(Temp);
				Temp.clear();
			}
		}
		else
		{
			Temp += myStr[i];
		}
	}

	if (0 != Temp.size())
	{
		answer.emplace_back(Temp);
	}


	if (true == answer.empty())
	{
		answer.emplace_back("EMPTY");
	}

	return answer;
}
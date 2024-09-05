#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string)
{
	std::vector<std::string> answer;

	std::string Temp;
	for (int i = 0; i < my_string.size(); ++i)
	{
		if (my_string[i] != ' ')
		{
			Temp += my_string[i];
		}
		else
		{
			if (false == Temp.empty())
			{
				answer.emplace_back(Temp);
			}
			Temp.clear();
		}
	}
	if (false == Temp.empty())
	{
		answer.emplace_back(Temp);
	}

	return answer;
}
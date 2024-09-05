#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString)
{
	std::vector<std::string> answer;

	std::string Temp;
	Temp.clear();
	for (int i = 0; i < myString.size(); ++i)
	{
		if (i == myString.find('x', i))
		{
			if (Temp.size() != 0)
			{
				answer.emplace_back(Temp);
				Temp.clear();
			}
		}
		else
		{
			Temp += myString[i];
		}
	}

	if (0 != Temp.size())
	{
		answer.emplace_back(Temp);
		Temp.clear();
	}

	std::sort(answer.begin(), answer.end());

	return answer;
}
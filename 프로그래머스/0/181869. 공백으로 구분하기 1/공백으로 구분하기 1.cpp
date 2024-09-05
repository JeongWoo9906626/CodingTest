#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) 
{
	std::vector<std::string> answer;

	int TempIndex = 0;
	std::string Temp = "";
	for (int i = 0; i < my_string.size(); ++i)
	{
		if (i == my_string.find(" ", i))
		{
			for (int j = TempIndex; j < i; ++j)
			{
				Temp += my_string[j];
			}
			TempIndex = i + 1;
			answer.emplace_back(Temp);
			Temp.clear();
		}
	}
	Temp = my_string.substr(TempIndex, my_string.size() - TempIndex);
	answer.emplace_back(Temp);

	/*for (int j = TempIndex; j < my_string.size(); ++j)
	{
		Temp += my_string[j];
	}
	answer.emplace_back(Temp);*/

	return answer;
}

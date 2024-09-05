#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) 
{
	std::vector<std::string> answer;

	for (std::string Word : strArr)
	{
		if (Word.find("ad") == std::string::npos)
		{
			answer.emplace_back(Word);
		}
	}

	return answer;
}
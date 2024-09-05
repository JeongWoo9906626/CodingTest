#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strArr) 
{
	std::vector<std::string> answer;

	int Count = 0;
	for (std::string Word : strArr)
	{
		if (0 == Count % 2)
		{
			std::transform(Word.begin(), Word.end(), Word.begin(), ::tolower);
		}
		else
		{
			std::transform(Word.begin(), Word.end(), Word.begin(), ::toupper);
		}
		answer.emplace_back(Word);
		++Count;
	}

	return answer;
}
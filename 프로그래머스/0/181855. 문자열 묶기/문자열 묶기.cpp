#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) 
{
	int answer = 0;

	std::vector<int> NumberSize;
	NumberSize.resize(31, 0);
	for (std::string Word : strArr)
	{
		NumberSize[Word.size()]++;
	}

	answer = *std::max_element(NumberSize.begin(), NumberSize.end());

	return answer;
}
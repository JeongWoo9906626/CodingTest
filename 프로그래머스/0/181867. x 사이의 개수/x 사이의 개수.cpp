#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) 
{
	std::vector<int> answer;

	int Count = 0;
	for (int i = 0; i < myString.size(); ++i)
	{
		if (i == myString.find('x', i))
		{
			answer.emplace_back(Count);
			Count = 0;
		}
		else
		{
			Count++;
		}
	}
	answer.emplace_back(Count);
	return answer;
}

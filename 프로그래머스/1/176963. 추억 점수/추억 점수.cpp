#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo)
{
	std::vector<int> answer;

	std::map<std::string, int> Pair;
	for (int i = 0; i < name.size(); ++i)
	{
		Pair.insert(std::pair<std::string, int>(name[i], yearning[i]));
	}

	for (std::vector<std::string> Check : photo)
	{
		int Count = 0;
		for (std::string Name : Check)
		{
			Count += Pair[Name];
		}
		answer.emplace_back(Count);
	}

	return answer;
}
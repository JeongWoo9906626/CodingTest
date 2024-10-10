#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) 
{
	std::string answer = "";
	std::unordered_map<std::string, int> Count;

	for (std::string Name : participant) 
	{
		Count[Name]++;
	}

	for (std::string Name : completion)
	{
		Count[Name]--;
	}

	for (std::pair<std::string, int> entry : Count) 
	{
		if (entry.second > 0) 
		{
			answer = entry.first;
		}
	}

	return answer;
}
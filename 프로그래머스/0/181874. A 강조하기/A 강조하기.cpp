#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string myString) 
{
	std::string answer = myString;

	std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

	for (int i = 0; i < answer.size(); ++i)
	{
		if ('a' == answer[i])
		{
			answer[i] = std::toupper(answer[i]);
		}
	}
	return answer;
}
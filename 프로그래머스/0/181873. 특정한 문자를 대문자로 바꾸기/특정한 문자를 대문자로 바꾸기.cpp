#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string, string alp)
{
	std::string answer = my_string;

	int Index = answer.find(static_cast<char>(alp[0]));
	for (int i = 0; i < answer.size(); ++i)
	{
		if (alp[0] == answer[i])
		{
			answer[i] = static_cast<char>(std::toupper(answer[i]));
		}
	}

	return answer;
}
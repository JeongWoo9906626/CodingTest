#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) 
{
	std::vector<std::string> answer;
    int LoopCount = my_str.size();
	for (int i = 0; i < LoopCount / n; ++i)
	{
		std::string Temp = my_str.substr(0, n);
		my_str = my_str.substr(n);
		answer.emplace_back(Temp);
	}
	if (false == my_str.empty())
    {
	    answer.emplace_back(my_str);
    }

	return answer;
}
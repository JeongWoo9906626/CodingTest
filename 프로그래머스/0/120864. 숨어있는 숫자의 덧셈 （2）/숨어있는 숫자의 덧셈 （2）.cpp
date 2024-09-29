#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
	int answer = 0;
	std::string Temp = "";
	for (int i = 0; i < my_string.size(); ++i)
	{
		if ('0' <= my_string[i] && '9' >= my_string[i])
		{
			Temp += my_string[i];
		}
		else
		{
			if (false == Temp.empty())
	        {
		        answer += std::stoi(Temp);
                Temp = "";
	        }
		}
	}

	if (false == Temp.empty())
	{
		answer += std::stoi(Temp);
	}

	return answer;
}
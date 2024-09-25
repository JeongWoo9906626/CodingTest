#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
	int answer = 0;

	while (n > 0)
	{
		++answer;
		if (0 == answer % 3 || std::string::npos != std::to_string(answer).find('3'))
		{
			continue;
		}
		--n;
	}

	return answer;
}
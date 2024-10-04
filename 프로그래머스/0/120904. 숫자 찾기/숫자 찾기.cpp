#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int num, int k) 
{
	int answer = -1;
	std::string Number = std::to_string(num);
	std::string::iterator it = std::find(Number.begin(), Number.end(), k + '0');
	if (it != Number.end())
	{
		answer = std::distance(Number.begin(), it) + 1;
	}

	return answer;
}
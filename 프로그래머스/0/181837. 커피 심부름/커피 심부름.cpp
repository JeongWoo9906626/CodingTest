#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> order) 
{
	int answer = 0;

	for (std::string Coffee : order)
	{
		
		if (std::string::npos != Coffee.find("latte"))
		{
			answer += 5000;
		}
		else
		{
			answer += 4500;
		}
	}

	return answer;
}
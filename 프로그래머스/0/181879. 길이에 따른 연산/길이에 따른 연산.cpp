#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
	int answer = 0;

	if (11 <= num_list.size())
	{
		for (int Number : num_list)
		{
			answer += Number;
		}
	}
	else
	{
		answer = 1;
		for (int Number : num_list)
		{
			answer *= Number;
		}
	}

	return answer;
}

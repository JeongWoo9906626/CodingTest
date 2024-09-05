#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
	int answer = 0;

	for (int Number : num_list)
	{
		while (true)
		{
			if (1 == Number)
			{
				break;
			}
			if (0 == Number % 2)
			{
				Number /= 2;
			}
			else
			{
				Number = (Number - 1) / 2;
			}
			++answer;
		}
	}

	return answer;
}
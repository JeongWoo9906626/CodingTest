#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
	std::vector<int> answer;
	std::vector<int> Temp = emergency;
	std::sort(Temp.begin(), Temp.end(), std::greater<int>());

	for (int i = 0; i < emergency.size(); ++i)
	{
		for (int j = 0; j < Temp.size(); ++j)
		{
			if (emergency[i] == Temp[j])
			{
				answer.push_back(j + 1);
				break;
			}
		}
	}

	return answer;
}
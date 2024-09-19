#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) 
{
	std::vector<int> answer;
	int TotalTime = prices.size();

	for (int i = 0; i < TotalTime; ++i)
	{
		int Count = 0;
		for (int j = i + 1; j < TotalTime; ++j)
		{
			++Count;
			if (prices[i] > prices[j])
			{
				break;
			}
		}
		answer.emplace_back(Count);
	}

	return answer;
}

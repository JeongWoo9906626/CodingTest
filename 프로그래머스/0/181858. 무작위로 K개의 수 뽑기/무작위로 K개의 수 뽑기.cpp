#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k)
{
	std::vector<int> answer;
	std::set<int> Set;
	
	for (int Value : arr)
	{
		if (0 == Set.count(Value) && answer.size() < k)
		{
			Set.insert(Value);
			answer.emplace_back(Value);
		}
	}
	int CheckNumber = answer.size();
	for (int i = 0; i < k - CheckNumber; ++i)
	{
		answer.emplace_back(-1);
	}
	return answer;
}

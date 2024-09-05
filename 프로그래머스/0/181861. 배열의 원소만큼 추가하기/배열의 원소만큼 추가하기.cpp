#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
	std::vector<int> answer;

	for (int Number : arr)
	{
		for (int i = 0; i < Number; ++i)
		{
			answer.emplace_back(Number);
		}
	}

	return answer;
}
#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> solution(vector<int> arr) 
{
	std::vector<int> answer;

	int Size = 0;
	for (int i = 9; i >= 0; --i)
	{
		if (arr.size() > std::pow(2, i))
		{
			Size = i + 1;
			break;
		}
		else if (arr.size() == std::pow(2, i))
		{
			Size = i;
			break;
		}
	}

	for (int i = 0; i < arr.size(); ++i)
	{
		answer.emplace_back(arr[i]);
	}

	for (int i = 0; i < std::pow(2, Size) - arr.size(); ++i)
	{
		answer.emplace_back(0);
	}

	return answer;
}
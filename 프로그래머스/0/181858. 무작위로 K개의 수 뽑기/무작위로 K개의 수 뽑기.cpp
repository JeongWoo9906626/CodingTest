#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k)
{
	std::vector<int> answer;
	std::vector<int> IndexVector;
	int Temp = k;
	
	for (int i = 0; i < arr.size(); ++i)
	{
		if (IndexVector.end() == std::find(IndexVector.begin(), IndexVector.end(), arr[i]))
		{
			IndexVector.emplace_back(arr[i]);
		}
	}

	int CheckNum = k > IndexVector.size() ? IndexVector.size() : k;

	for (int i = 0; i < CheckNum; ++i)
	{
		answer.emplace_back(IndexVector[i]);
	}

	for (int i = 0; i < k - CheckNum; ++i)
	{
		answer.emplace_back(-1);
	}

	return answer;
}

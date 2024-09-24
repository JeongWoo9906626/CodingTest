#include <string>
#include <vector>
#include <set>

using namespace std;
bool SetCompare(int a, int b)
{
	return a > b;
}
vector<int> solution(vector<vector<int>> score) 
{
	std::vector<int> answer;
	answer.resize(score.size(), 0);
	std::set<int, decltype(&SetCompare)> Avg(&SetCompare);
	std::vector<int> Temp;
	for (std::vector<int> Result : score)
	{
		Avg.insert(Result[0] + Result[1]);
		Temp.push_back(Result[0] + Result[1]);
	}

	int Rank = 1;
	for (int Sum : Avg)
	{
		int Same = 0;
		for (int i = 0; i < Temp.size(); ++i)
		{
			if (Sum == Temp[i])
			{
				answer[i] = Rank;
				++Same;
			}
		}
		Rank += Same;
	}

	return answer;
}
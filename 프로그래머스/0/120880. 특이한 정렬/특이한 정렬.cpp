#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool Compare(const std::pair<int, int>& Left, const std::pair<int, int>& Right)
{
	bool Result = Left.first < Right.first;
	if (Left.first == Right.first)
	{
		Result = Left.second > Right.second;
	}
	return Result;
}
vector<int> solution(vector<int> numlist, int n) 
{
std::vector<int> answer;

std::vector<std::pair<int, int>> Index;

for (int i = 0; i < numlist.size(); ++i)
{
	int Dist = std::abs(n - numlist[i]);
	Index.push_back({ Dist, numlist[i] });
}

std::sort(Index.begin(), Index.end(), Compare);

for (std::pair<int, int> Temp : Index)
{
	answer.push_back(Temp.second);
}

return answer;
}
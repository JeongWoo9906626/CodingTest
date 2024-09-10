#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool Compare(const std::pair<int, float>& Left, const std::pair<int, float>& Right)
{
    if (Left.second == Right.second)
    {
        return Left.first < Right.first;
    }
    return Left.second > Right.second;
}

vector<int> solution(int N, vector<int> stages) 
{
    vector<int> answer;
    std::vector<int> CurStagePerson;
    CurStagePerson.resize(N + 2, 0);

    for (int Stage : stages)
    {
        ++CurStagePerson[Stage];
    }

    int PlayersCount = stages.size();

    std::vector<std::pair<int, float>> Temp;
    for (int i = 1; i <= N; ++i)
    {
        float FailPercent = static_cast<float>(CurStagePerson[i]) / PlayersCount;
        if (true == isnan(FailPercent))
        {
            FailPercent = 0.f;
        }
        PlayersCount -= CurStagePerson[i];
        Temp.emplace_back(i, FailPercent);
    }

    std::sort(Temp.begin(), Temp.end(), Compare);

    for (int i = 0; i < Temp.size(); ++i)
    {
        answer.emplace_back(Temp[i].first);
    }

	return answer;
}